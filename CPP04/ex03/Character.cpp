/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:57:16 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/08 19:33:32 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("NoName") {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return;
}

Character::Character(std::string name) : _name(name) {
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return;
}

Character::Character(Character const &copy) {
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = copy;
	return;
}

Character &Character::operator=(Character const &base) {
	if (this != &base)
	{
		this->_name = base._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (base._inventory[i])
					this->_inventory[i] = base._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	std::cout << "Character copy assignment operator called" << std::endl;
	return *this;
}

Character::~Character(void) {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
	return;
}

std::string const & Character::getName() const {
	return(this->_name);
}

void Character::equip(AMateria* m) {
	if (!m)
	{
		//std::cout << "Error: no AMateria" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
		{
			//std::cout << "AMateria is already equiped" << std::endl;
			return;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

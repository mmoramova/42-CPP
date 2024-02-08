/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:05:34 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/08 18:38:00 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return;
}

MateriaSource::MateriaSource(MateriaSource const &copy) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (copy._inventory[i])
				this->_inventory[i] = copy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &base) {
	if (this != &base)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_inventory[i];
			if (base._inventory[i])
					this->_inventory[i] = base._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
	return;
}

void MateriaSource::learnMateria(AMateria *m) {
	if (!m)
	{
		//std::cout << "Error: no AMateria" << std::endl;
		return;
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

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
		{
			return(this->_inventory[i]->clone());
		}
	}
	return 0;
}

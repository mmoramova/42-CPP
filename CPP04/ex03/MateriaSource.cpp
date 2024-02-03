/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:05:34 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/03 18:23:20 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource default constructor called" << std::endl;
	return;
}

MateriaSource::MateriaSource(MateriaSource const &copy) {
	std::cout << "MateriaSource copy constructor called" << std::endl;

	*this = copy;
	return;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &base) {
	if (this != &base)
	{

	}
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource destructor called" << std::endl;
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

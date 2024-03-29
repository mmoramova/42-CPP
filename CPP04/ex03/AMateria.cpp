/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:38:33 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 09:31:36 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	std::cout << "AMateria default constructor called" << std::endl;
	return;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria constructor called" << std::endl;
	this->setType(type);
	return;
}

AMateria::AMateria(AMateria const &copy) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
	return;
}

AMateria &AMateria::operator=(AMateria const &base) {
	if (this != &base)
	{
		this->_type = base._type;
	}
	std::cout << "AMateria copy assignment operator called" << std::endl;
	return *this;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria destructor called" << std::endl;
	return;
}

void AMateria::setType(std::string type) {
	this->_type = type;
	return;
}

std::string const & AMateria::getType() const {
	return(this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "* AMateria use" << target.getName() << " *" << std::endl;
}

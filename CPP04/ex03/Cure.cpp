/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:09:19 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 17:09:49 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("Cure") {
	std::cout << "Cure default constructor called" << std::endl;
	return;
}

Cure::Cure(Cure const &copy) : AMateria("Cure") {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
	return;
}

Cure &Cure::operator=(Cure const &base) {
	if (this != &base)
	{
		this->_type = base._type;
		;
	}
	std::cout << "Cure copy assignment operator called" << std::endl;
	return *this;
}

Cure::~Cure(void) {
	std::cout << "Cure destructor called" << std::endl;
	return;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

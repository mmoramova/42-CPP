/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:38:46 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/02 19:17:49 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	std::cout << "AAnimal default constructor called" << std::endl;
	return;
}

AAnimal::AAnimal( std::string type) : _type(type) {
	std::cout << "AAnimal constructor called" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const &copy) : _type(copy._type) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	return;
}

AAnimal &AAnimal::operator=(AAnimal const &base) {
	if (this != &base)
	{
		this->_type = base._type;
	}
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	return *this;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor called" << std::endl;
	return;
}

void AAnimal::makeSound(void) const {
	std::cout << "AAnimal sound" << std::endl;
}

void AAnimal::setType( std::string type ) {
	std::cout << "AAnimal type set to: " << type << std::endl;
	this->_type = type;
	return;
}

std::string	AAnimal::getType( void ) const {
	return(this->_type);
}

std::ostream& operator<<(std::ostream& out, const AAnimal& base) {
	out << base.getType();
	return out;
}

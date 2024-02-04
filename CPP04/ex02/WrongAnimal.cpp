/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:06:25 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 15:21:21 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( std::string type) : _type(type) {
	std::cout << "WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) : _type(copy._type) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	return;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &base) {
	if (this != &base)
	{
		this->_type = base._type;
	}
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
	return;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal sound" << std::endl;
}

void WrongAnimal::setType( std::string type ) {
	std::cout << "WrongAnimal type set to: " << type << std::endl;
	this->_type = type;
	return;
}

std::string	WrongAnimal::getType( void ) const {
	return(this->_type);
}

std::ostream& operator<<(std::ostream& out, const WrongAnimal& base) {
	out << base.getType();
	return out;
}

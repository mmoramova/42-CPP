/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:38:46 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 15:20:23 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal( std::string type) : _type(type) {
	std::cout << "Animal constructor called" << std::endl;
	return;
}

Animal::Animal(Animal const &copy) : _type(copy._type) {
	std::cout << "Animal copy constructor called" << std::endl;
	return;
}

Animal &Animal::operator=(Animal const &base) {
	if (this != &base)
	{
		this->_type = base._type;
	}
	std::cout << "Animal copy assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
	return;
}

void Animal::setType( std::string type ) {
	std::cout << "Animal type set to: " << type << std::endl;
	this->_type = type;
	return;
}

std::string	Animal::getType( void ) const {
	return(this->_type);
}

std::ostream& operator<<(std::ostream& out, const Animal& base) {
	out << base.getType();
	return out;
}

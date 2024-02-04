/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:46:37 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 15:20:11 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	return;
}

Dog::Dog(Dog const &copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
	return;
}

Dog &Dog::operator=(Dog const &base) {
	if (this != &base)
	{
		this->_type = base._type;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	return;
}

void Dog::makeSound(void) const {
	std::cout << "Dog sound" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Dog& base) {
	out << base.getType();
	return out;
}

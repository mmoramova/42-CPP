/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:46:15 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 15:20:16 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	return;
}

Cat::Cat(Cat const &copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
	return;
}

Cat &Cat::operator=(Cat const &base) {
	if (this != &base)
	{
		this->_type = base._type;;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	return;
}

void Cat::makeSound(void) const {
	std::cout << "Cat sound" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Cat& base) {
	out << base.getType();
	return out;
}

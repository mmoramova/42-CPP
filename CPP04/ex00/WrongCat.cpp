/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:07:11 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/02 19:18:23 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->setType("WrongCat");
	return;
}

WrongCat::WrongCat(WrongCat const &copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
	return;
}

WrongCat &WrongCat::operator=(WrongCat const &base) {
	if (this != &base)
	{
		this->setType(base.getType());
	}
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
	return;
}

void WrongCat::makeSound(void) const {
	std::cout << "WrongCat sound" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const WrongCat& base) {
	out << base.getType();
	return out;
}

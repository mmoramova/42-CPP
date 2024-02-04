/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:29:15 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/03 16:36:23 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
	return;
}

Ice::Ice(Ice const &copy) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
	return;
}

Ice &Ice::operator=(Ice const &base) {
	if (this != &base)
	{
		//this->setType(base.getType());
		;
	}
	std::cout << "Ice copy assignment operator called" << std::endl;
	return *this;
}

Ice::~Ice(void) {
	std::cout << "Ice destructor called" << std::endl;
	return;
}

AMateria* Ice::clone() const {
	return new Ice(*this);
	//return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
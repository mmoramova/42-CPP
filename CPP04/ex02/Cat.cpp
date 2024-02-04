/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:46:15 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 16:51:55 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	catBrain = new Brain();
	return;
}

Cat::Cat(Cat const &copy) : AAnimal("Cat") {
	std::cout << "Cat copy constructor called" << std::endl;
	if (copy.catBrain)
		this->catBrain = new Brain(*copy.catBrain);
	else
		this->catBrain = NULL;
	return;
}

Cat &Cat::operator=(Cat const &base) {
	if (this != &base)
	{
		this->_type = base._type;
		if (this->catBrain)
			delete this->catBrain;
		if (base.catBrain)
			this->catBrain = new Brain(*base.catBrain);
		else
			this->catBrain = NULL;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat(void) {
	delete this->catBrain;
	std::cout << "Cat destructor called" << std::endl;
	return;
}

void Cat::makeSound(void) const {
	std::cout << "Cat sound" << std::endl;
}

void Cat::setIdea(int i, std::string idea) {
	this->catBrain->setIdea(i, idea);
	return;
}

std::string	Cat::getIdea(int i) const {
	return(this->catBrain->getIdea((i)));
}

std::ostream& operator<<(std::ostream& out, const Cat& base) {
	out << base.getType();
	return out;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:46:37 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 16:54:57 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	dogBrain = new Brain();
	return;
}

Dog::Dog(Dog const &copy) : Animal("Dog") {
	std::cout << "Dog copy constructor called" << std::endl;
	if (copy.dogBrain)
		this->dogBrain = new Brain(*copy.dogBrain);
	else
		this->dogBrain = NULL;
	return;
}

Dog &Dog::operator=(Dog const &base) {
	if (this != &base)
	{
		this->_type = base._type;
		if (this->dogBrain)
			delete this->dogBrain;
		if (base.dogBrain)
			this->dogBrain = new Brain(*base.dogBrain);
		else
			this->dogBrain = NULL;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(void) {
	delete this->dogBrain;
	std::cout << "Dog destructor called" << std::endl;
	return;
}

void Dog::makeSound(void) const {
	std::cout << "Dog sound" << std::endl;
}

void Dog::setIdea(int i, std::string idea) {
	this->dogBrain->setIdea(i, idea);
	return;
}

std::string	Dog::getIdea(int i) const {
	return(this->dogBrain->getIdea((i)));
}

std::ostream& operator<<(std::ostream& out, const Dog& base) {
	out << base.getType();
	return out;
}

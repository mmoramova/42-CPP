/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:46:37 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/03 13:17:17 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	dogBrain = new Brain;
	return;
}


Dog::Dog(Dog const &copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	dogBrain = new Brain;
	*this = copy;
	return;
}

Dog &Dog::operator=(Dog const &base) {
	if (this != &base)
	{
		this->setType(base.getType());
	/*	if (this->dogBrain)
			delete this->dogBrain;
		if (base.dogBrain)
			this->dogBrain = new Brain(*base.dogBrain);
		else
			this->dogBrain = NULL;*/
		*dogBrain = *base.dogBrain;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(void) {
	delete dogBrain;
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

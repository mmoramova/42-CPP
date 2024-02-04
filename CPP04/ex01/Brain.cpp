/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:38:46 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/02 19:17:49 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
			this->setIdea(i, "no idea yet");
	return;
}

Brain::Brain(Brain const &copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	return;
}

Brain &Brain::operator=(Brain const &base) {
	if (this != &base)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = base._ideas[i];
	}
	std::cout << "Brain copy assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
	return;
}

void Brain::setIdea(int i, std::string idea) {
	if (0 <= i && i < 100)
	{
		this->_ideas[i] = idea;
		//std::cout << "Brain idea " << i << " set to: " << idea << std::endl;
	}
	else
		std::cout << "Incorrect input, there is place only for 100 ideas" << std::endl;
	return;
}

std::string	Brain::getIdea(int i) const {
	if (0 <= i && i < 100)
		return(this->_ideas[i]);
	else
		return("Incorrect input, there is place only for 100 ideas");

}

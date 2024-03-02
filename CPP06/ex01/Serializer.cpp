/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:58:56 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/02 12:19:45 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {
	std::cout << "Serializer default constructor called" << std::endl;
	return;
}

Serializer::Serializer(Serializer const &copy) {
	(void) copy;
	*this = copy;
	std::cout << "Serializer copy constructor called" << std::endl;
	return;
}

Serializer &Serializer::operator=(Serializer const &base) {
	(void) base;
	std::cout << "Serializer copy assignment operator called" << std::endl;
	return *this;
}

Serializer::~Serializer(void) {
	std::cout << "Serializer destructor called" << std::endl;
	return;
}

uintptr_t Serializer::serialize(Data* ptr) {
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return(reinterpret_cast<Data*>(raw));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:39:26 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 11:36:01 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointNbr(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointNbr = copy.getRawBits();
	return;
}

Fixed &Fixed::operator=(Fixed const &base) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &base) {
		_fixedPointNbr = base.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointNbr);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called " << std::endl;
	this->_fixedPointNbr = raw;
	return;
}


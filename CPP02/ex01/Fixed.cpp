/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:17:55 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 11:50:59 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointNbr(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const intNbr) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNbr = intNbr << _fractionalBits;
	return;
}

Fixed::Fixed(float const floatNbr) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointNbr = (roundf)(floatNbr * (1 << _fractionalBits));
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
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointNbr);
}

void Fixed::setRawBits(int const raw) {
	//std::cout << "setRawBits member function called " << std::endl;
	this->_fixedPointNbr = raw;
	return;
}

float Fixed::toFloat(void) const {
	return (this->_fixedPointNbr / static_cast<float>(1 << this->_fractionalBits));

}

int Fixed::toInt(void) const {
	return(this->_fixedPointNbr >> this->_fractionalBits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &base) {
	out << base.toFloat();
	return (out);
}


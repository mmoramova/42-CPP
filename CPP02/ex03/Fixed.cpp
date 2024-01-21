/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:25:48 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 18:18:16 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointNbr(0) {
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const intNbr) {
	//std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNbr = intNbr << _fractionalBits;
	return;
}

Fixed::Fixed(float const floatNbr) {
	//std::cout << "Float constructor called" << std::endl;
	this->_fixedPointNbr = (roundf)(floatNbr * (1 << _fractionalBits));
	return;
}

Fixed::Fixed(Fixed const &copy) {
	//std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointNbr = copy.getRawBits();
	return;
}

Fixed &Fixed::operator=(Fixed const &base) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &base) {
		this->_fixedPointNbr = base.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(void) {
	//std::cout << "Destructor called" << std::endl;
	return;
}

bool Fixed::operator>(const Fixed &base) const {
	return(this->getRawBits() > base.getRawBits());
}

bool Fixed::operator<(const Fixed &base) const {
	return(this->getRawBits() < base.getRawBits());
}

bool Fixed::operator>=(const Fixed &base) const {
	return(this->getRawBits() >= base.getRawBits());
}

bool Fixed::operator<=(const Fixed &base) const {
	return(this->getRawBits() <= base.getRawBits());
}

bool Fixed::operator==(const Fixed &base) const {
	return(this->getRawBits() == base.getRawBits());
}

bool Fixed::operator!=(const Fixed &base) const {
	return(this->getRawBits() != base.getRawBits());
}

Fixed Fixed::operator+(const Fixed &base) const {
	return(this->toFloat() + base.toFloat());
}

Fixed Fixed::operator-(const Fixed &base) const {
	return(this->toFloat() - base.toFloat());
}

Fixed Fixed::operator*(const Fixed &base) const {
	return(this->toFloat() * base.toFloat());
}

Fixed Fixed::operator/(const Fixed &base) const {
	return(this->toFloat() / base.toFloat());
}

//a++
Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return temp;
}

//++a
Fixed &Fixed::operator++(void) {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

//a--
Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return temp;
}

//--a
Fixed &Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
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

Fixed& Fixed::min (Fixed& a, Fixed& b) {
	std::cout << "min member function called" << std::endl;
	return a.getRawBits() > b.getRawBits() ? b : a;
}

const Fixed& Fixed::min (const Fixed& a, const Fixed& b) {
	std::cout << "const min member function called" << std::endl;
	return a.getRawBits() > b.getRawBits() ? b : a;
}

Fixed& Fixed::max (Fixed& a, Fixed& b) {
	std::cout << "max member function called" << std::endl;
	return a.getRawBits() > b.getRawBits() ? a : b;
}

const Fixed& Fixed::max (const Fixed& a, const Fixed& b) {
	std::cout << "const max member function called" << std::endl;
	return a.getRawBits() > b.getRawBits() ? a : b;
}

std::ostream& operator<<(std::ostream &out, const Fixed &base) {
	out << base.toFloat();
	return (out);
}

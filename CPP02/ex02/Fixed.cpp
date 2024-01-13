/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:04:30 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/13 16:45:09 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointNbr = 0;
	return;
}

Fixed::Fixed( int const intNbr ) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNbr = intNbr << fractionalBits;
	return;
}

Fixed::Fixed( float const floatNbr ) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNbr = (roundf)(floatNbr * (1 << fractionalBits));
	return;
}

Fixed::Fixed( const Fixed& base ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = base;

	return;
}

bool Fixed::operator>(const Fixed& base) const {
	return(this->fixedPointNbr > base.getRawBits());
}

bool Fixed::operator<(const Fixed& base) const {
	return(this->fixedPointNbr < base.getRawBits());
}

bool Fixed::operator>=(const Fixed& base) const {
	return(this->fixedPointNbr >= base.getRawBits());
}

bool Fixed::operator<=(const Fixed& base) const {
	return(this->fixedPointNbr <= base.getRawBits());
}

bool Fixed::operator==(const Fixed& base) const {
	return(this->fixedPointNbr == base.getRawBits());
}

bool Fixed::operator!=(const Fixed& base) const {
	return(this->fixedPointNbr != base.getRawBits());
}

Fixed Fixed::operator+(const Fixed& base) const {
	return(this->toFloat() + base.toFloat());
}

Fixed Fixed::operator-(const Fixed& base) const {
	return(this->toFloat() - base.toFloat());
}

Fixed Fixed::operator*(const Fixed& base) const {
	return(this->toFloat() * base.toFloat());
}

Fixed Fixed::operator/(const Fixed& base) const {
	return(this->toFloat() / base.toFloat());
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	this->setRawBits(fixedPointNbr + (1 << fractionalBits));
	return temp;
}

Fixed& Fixed::operator++(void) {
	this->setRawBits(fixedPointNbr + (1 << fractionalBits));
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	this->setRawBits(fixedPointNbr - (1 << fractionalBits));
	return temp;
}

Fixed& Fixed::operator--(void) {
	this->setRawBits(fixedPointNbr - (1 << fractionalBits));
	return (*this);
}


Fixed& Fixed::operator=(const Fixed& base) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &base) {
		fixedPointNbr = base.getRawBits();
	}
	return *this;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Fixed::getRawBits( void ) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return fixedPointNbr;
}

void Fixed::setRawBits( int const raw ) {
	//std::cout << "setRawBits member function called " << raw <<  std::endl;
	this->fixedPointNbr = raw;
	return;
}

float Fixed::toFloat( void ) const {
	return (this->fixedPointNbr / static_cast<float>(1 << this->fractionalBits));

}

int Fixed::toInt( void ) const {
	return(this->fixedPointNbr >> this->fractionalBits);
}

Fixed& Fixed::min (Fixed& a, Fixed& b) {
	return a.getRawBits() > b.getRawBits() ? b : a;
}

const Fixed& Fixed::min (const Fixed& a, const Fixed& b) {
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

std::ostream& operator<<(std::ostream& out, const Fixed& base) {
	out << base.toFloat();
	return (out);
}


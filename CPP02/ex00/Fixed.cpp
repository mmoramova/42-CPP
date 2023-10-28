/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:39:26 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/28 13:15:04 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointNbr = 0;
	return;
}

Fixed::Fixed( const Fixed& base ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = base;

	return;
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
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointNbr;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called "  << raw<<  std::endl;
	return;
}


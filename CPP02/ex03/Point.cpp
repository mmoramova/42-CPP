/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:27:46 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 13:02:57 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

/*Point::Point(Point const &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->_x = copy.getX();
	this->_y = copy.getY();
	return;
}
*/

Point &Point::operator=(Point &base) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &base) {
		this->_x = base.getX();
		this->_y = base.getY();
	}
	return (*this);
}

Point::~Point(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

const Fixed& Point::getX(void) const {
	return (this->_x);
}

const Fixed& Point::getY(void) const {
	return (this->_y);
}

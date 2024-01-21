/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:27:46 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 18:17:33 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)) {
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Point::Point(Point const &copy) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Point &Point::operator=(Point const &base) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &base) {
		const_cast<Fixed&>(_x) = base.getX();
		const_cast<Fixed&>(_y) = base.getY();
	}
	return (*this);
}

Point::~Point(void) {
	//std::cout << "Destructor called" << std::endl;
	return;
}

Fixed Point::getX(void) const {
	return (this->_x);
}

Fixed Point::getY(void) const {
	return (this->_y);
}

std::ostream& operator<<(std::ostream &out, const Point &base) {
	out << '(' << base.getX() << ',' << base.getY() << ')';
	return (out);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:27:03 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 13:03:01 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_H
# define Point_H

#include <iostream>
#include <iomanip>
#include "Fixed.hpp"

class Point {

public:

	Point(void);
	Point(Fixed const x, Fixed const y);
	Point(Point const &copy);
	Point &operator=(Point &base);
	~Point(void);

	const Fixed& getX(void) const;
	const Fixed& getY(void) const;

private:

	Fixed const	_x;
	Fixed const	_y;

};

#endif

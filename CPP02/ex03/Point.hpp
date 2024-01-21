/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:27:03 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 16:00:26 by mmoramov         ###   ########.fr       */
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
	Point(const float x, const float y);
	Point(Point const &copy);
	Point &operator=(Point const &base);
	~Point(void);

	Fixed getX(void) const;
	Fixed getY(void) const;

private:

	Fixed const	_x;
	Fixed const	_y;

};

std::ostream& operator<<(std::ostream &out, const Point &base);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:28:17 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 17:54:21 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed pl(Point const p1, Point const p2, Point const point) {

	Fixed A(p1.getY().toFloat() - p2.getY().toFloat());
	Fixed B(p2.getX().toFloat() - p1.getX().toFloat());
	Fixed C(Fixed(-1) * (A * p1.getX().toFloat()+ B * p1.getY().toFloat()));

	//std::cout << "A IS " << A << std::endl;
	//std::cout << "B IS " << B << std::endl;
	//std::cout << "C IS " << C << std::endl;

	return (A * point.getX().toFloat() + B * point.getY().toFloat() + C);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	std::cout << "Points are: " << std::endl;
	std::cout << "a = " << a << ", b = " << b << ", c = " << c
	<< ", point = " << point << std::endl;

	Fixed AB(pl(a, b, point));
	Fixed BC(pl(b, c, point));
	Fixed CA(pl(c, a, point));

	//std::cout << "AB IS " << AB << std::endl;
	//std::cout << "BC IS " << BC << std::endl;
	//std::cout << "CA IS " << CA << std::endl;

	return ((AB > 0 && BC > 0 && CA > 0) || (AB < 0 && BC < 0 && CA < 0));
}

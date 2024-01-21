/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:04:42 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 12:23:05 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main (void)
{

	{
		Fixed		a(3.4f);
		Fixed		b(4);
		Fixed		c(2);
		Fixed const d(1);
		Fixed const e(1.4f);
		Fixed		f(1.0f);

		std::cout << "a " << a << std::endl;
		std::cout << "b " << b << std::endl;
		std::cout << "c " << c << std::endl;
		std::cout << "d " << d << std::endl;
		std::cout << "e " << e << std::endl;
		std::cout << "-------------------------------"<< std::endl;

		std::cout << "TEST <,>,>=,<=,==,!="<< std::endl;
		std::cout << "a < b " << (a < b) << std::endl;
		std::cout << "a > b " << (a > b)  << std::endl;
		std::cout << "d >= e " << (d >= e) << std::endl;
		std::cout << "d <= e " << (d <= e) << std::endl;
		std::cout << "d == f " << (d == f) << std::endl;
		std::cout << "d != f " << (d != f) << std::endl;
		std::cout << "-------------------------------"<< std::endl;

		std::cout << "TEST +,-,*,/"<< std::endl;
		std::cout << "a + b " << a + b << std::endl;
		std::cout << "a - b " << a - b << std::endl;
		std::cout << "a * b " << a * b << std::endl;
		std::cout << "b * c " << b * c << std::endl;
		std::cout << "b / c " << b / c << std::endl;
		std::cout << "c / b " << c / b << std::endl;
		std::cout << "-------------------------------"<< std::endl;

		std::cout << "TEST ++i, i++"<< std::endl;
		std::cout << "a++ " << a++ << std::endl;
		std::cout << "a " << a << std::endl;
		std::cout << "++a " << ++a << std::endl;
		std::cout << "-------------------------------"<< std::endl;

		std::cout << "b++ " << b++ << std::endl;
		std::cout << "b " << b << std::endl;
		std::cout << "++b " << ++b << std::endl;
		std::cout << "-------------------------------"<< std::endl;

		std::cout << "TEST --i, i--"<< std::endl;
		std::cout << "a-- " << a-- << std::endl;
		std::cout << "a " << a << std::endl;
		std::cout << "--a " << --a << std::endl;
		std::cout << "-------------------------------"<< std::endl;

		std::cout << "b-- " << b-- << std::endl;
		std::cout << "b " << b << std::endl;
		std::cout << "--b " << --b << std::endl;
		std::cout << "-------------------------------"<< std::endl;

		std::cout << "TEST MIN"<< std::endl;
		c = c.min(a,b);
		std::cout << "min(a,b) " << c << std::endl;
		std::cout << "min(a,b) " << Fixed::min(a,b) << std::endl;
		std::cout << "-------------------------------"<< std::endl;

		std::cout << "TEST MAX"<< std::endl;
		std::cout << "max(a,b) " << Fixed::max(a,b) << std::endl;
		std::cout << "max(d,e) " << Fixed::max(d,e) << std::endl;
		std::cout << "-------------------------------"<< std::endl;
		return 0;
	}
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
		return 0;
	}
}

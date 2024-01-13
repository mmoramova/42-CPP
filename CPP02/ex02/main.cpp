/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:04:42 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/13 16:48:53 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main (void)
{
	Fixed 		a (3.4f);
	Fixed 		b (4);
	Fixed		c (2);
	Fixed const d;

	c = b++;
	std::cout << "a " << a << std::endl;
	std::cout << "b " << b << std::endl;
	std::cout << "c " << c << std::endl;

	std::cout << "a + b " << a + b << std::endl;
	std::cout << "a - b " << a - b << std::endl;
	std::cout << "a * b " << a * b << std::endl;
	std::cout << "b * c " << b * c << std::endl;
	std::cout << "b / c " << b / c << std::endl;
	std::cout << "c / b " << c / b << std::endl;

	std::cout << "a++ " << a++ << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "++a " << ++a << std::endl;

	std::cout << "b++ " << b++ << std::endl;
	std::cout << "b " << b << std::endl;
	std::cout << "++b " << ++b << std::endl;

	std::cout << "a-- " << a-- << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "--a " << --a << std::endl;

	std::cout << "b-- " << b-- << std::endl;
	std::cout << "b " << b << std::endl;
	std::cout << "--b " << --b << std::endl;

	c = c.min(a,b);
	std::cout << "min(a,b) " << c << std::endl;
	std::cout << "min(a,b) " << Fixed::min(a,b) << std::endl;

	//d = d.max(a,b); //?
	d.max(a,b);
	std::cout << "max(a,b) " << d << std::endl;

	//Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	//std::cout << a << std::endl;
	//std::cout << ++a << std::endl;
	//std::cout << a << std::endl;
	//std::cout << a++ << std::endl;
	//std::cout << a << std::endl;
	//std::cout << b << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

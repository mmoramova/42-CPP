/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:04:42 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/28 16:20:36 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main (void)
{
	Fixed 		a (3.4f);
	Fixed 		b (4);

	bool c = a != b;
	std::cout << c << std::endl;

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

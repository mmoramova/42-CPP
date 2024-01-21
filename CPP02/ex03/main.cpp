/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:26:19 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 17:52:18 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main (void)
{
	{
		Point a(0,0);
		Point b(4,0);
		Point c(2,4);

		std::cout << bsp(a, b, c, Point(2,2)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(1,1)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(2,0)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(5,1)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(0,0)) << std::endl;
		std::cout << "-----" << std::endl;
		return 0;
	}
	{
		Point a(-2,0);
		Point b(3,-3);
		Point c(0,4);

		std::cout << bsp(a, b, c, Point(2,2)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(1,1)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(2,0)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(5,1)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(0,0)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(-0.68f,-0.68f)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(-1.0,-0.6)) << std::endl;
		std::cout << "-----" << std::endl;
		std::cout << bsp(a, b, c, Point(3,-3)) << std::endl;
		std::cout << "-----" << std::endl;
	}
	return (0);
}

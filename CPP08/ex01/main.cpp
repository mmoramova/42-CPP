/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:38:50 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/14 19:22:37 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(5);
		sp.addNumber(INT_MIN);
		sp.addNumber(INT_MAX);
		sp.addNumber(-30);
		sp.addNumber(0);
		sp.addNumber(-11);
		std::cout << "Shortest span " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try
	{
		Span sp = Span(50000);

		std::vector<int>vec(50000);
		for (int i = 0; i <=50000; ++i)
		{
			vec[i] = (i+1)*2;
		}
		sp.bulkAddNumber(vec.begin(), vec.end());
		std::cout << "Shortest span " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:41:58 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 10:18:27 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{

	try
	{
		Bureaucrat A("A");

		A.setGrade(15);
		std::cout << A;
		A.setGrade(151);
		std::cout << A;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat B("B");
		B.setGrade(150);
		std::cout << B;
		B.incrementGrade();
		std::cout << B;
		B.decrementGrade();
		std::cout << B;
		B.decrementGrade();
		std::cout << B;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}

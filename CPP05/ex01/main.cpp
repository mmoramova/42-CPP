/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:41:58 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 13:08:56 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{

	try
	{
		Bureaucrat A("A");
		Form F("Form1", 150, 150);

		A.setGrade(15);
		std::cout << A;
		A.signForm(F);
		A.signForm(F);
		std::cout << A;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	/*try
	{
		Bureaucrat B("B", 120);
		Form F("Form2", 10, 10);

		std::cout << F << std::endl;
		B.signForm(F);
		B.setGrade(5);
		B.signForm(F);
		std::cout << F << std::endl;

	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	*/

	return (0);
}

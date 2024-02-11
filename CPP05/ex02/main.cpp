/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:41:58 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 19:09:37 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{

	try
	{
		Bureaucrat B("B", 120);
		PresidentialPardonForm PF("PF1");

		std::cout << PF << std::endl;
		B.signForm(PF);
		std::cout << PF << std::endl;
		B.setGrade(25);
		B.signForm(PF);
		std::cout << PF << std::endl;
		B.executeForm(PF);
		B.setGrade(4);
		B.executeForm(PF);
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat C("C", 70);
		RobotomyRequestForm PF("PF2");

		std::cout << PF << std::endl;
		C.signForm(PF);
		std::cout << PF << std::endl;
		C.setGrade(15);
		C.signForm(PF);
		std::cout << PF << std::endl;
		C.executeForm(PF);
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat D("D", 150);
		ShrubberyCreationForm SF("PF2");

		std::cout << SF << std::endl;
		D.signForm(SF);
		D.setGrade(114);
		std::cout << SF << std::endl;
		D.signForm(SF);
		std::cout << SF << std::endl;
		D.executeForm(SF);
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}

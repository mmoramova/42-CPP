/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:41:58 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 14:16:57 by mmoramov         ###   ########.fr       */
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

	return (0);
}

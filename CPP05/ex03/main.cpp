/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:41:58 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/20 18:16:18 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	try
	{
		Intern someRandomIntern;
		Bureaucrat A("A", 10);

		AForm* rrf;
		AForm* scf;
		AForm* ppf;
		AForm* nf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf)
		{
			std::cout << *rrf << std::endl;
			A.signForm(*rrf);
			A.executeForm(*rrf);
		}

		scf = someRandomIntern.makeForm("shrubbery creation", "Cender");
		if (scf)
		{
			std::cout << *scf << std::endl;
			A.signForm(*scf);
			A.executeForm(*scf);
		}

		ppf = someRandomIntern.makeForm("presidential pardon", "Dender");
		if (ppf)
		{
			std::cout << *ppf << std::endl;
			A.signForm(*ppf);
			A.signForm(*ppf);
			A.executeForm(*ppf);
		}
		nf = someRandomIntern.makeForm("no exist form", "Dender");
		if (nf)
		{
			std::cout << *nf << std::endl;
			A.signForm(*nf);
			A.signForm(*nf);
			A.executeForm(*nf);
		}

		delete rrf;
		delete scf;
		delete ppf;
		delete nf;

	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}

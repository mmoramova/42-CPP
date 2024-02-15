/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:14:46 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/15 18:15:24 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "Intern default constructor called" << std::endl;
	return;
}

Intern::Intern(Intern const &copy) {
	(void) copy;
	std::cout << "Intern copy constructor called" << std::endl;
	return;
}

Intern &Intern::operator=(Intern const &base) {
	(void) base;
	std::cout << "Intern copy assignment operator called" << std::endl;
	return *this;
}

Intern::~Intern(void) {
	std::cout << "Intern destructor called" << std::endl;
	return;
}

AForm *Intern::findForm(std::string form, std::string target) {
	AForm* (Intern::*lstFuntions[3])(std::string target) = {&Intern::MakeShrubberyCreationForm, &Intern::MakeRobotomyRequestForm, &Intern::MakePresidentialPardonForm};
	std::string lstForms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i = 0;
	while (i < 3 && form.compare(lstForms[i]))
		i++;

	AForm *createdForm = NULL;
	if (i < 3)
		createdForm = (this->*lstFuntions[i])(target);
	return (createdForm);
}

AForm *Intern::MakeShrubberyCreationForm(std::string target) {
	return(new ShrubberyCreationForm(target));
}

AForm *Intern::MakeRobotomyRequestForm(std::string target) {
	return(new RobotomyRequestForm(target));
}

AForm *Intern::MakePresidentialPardonForm(std::string target) {
	return(new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string form, std::string target) {

	AForm *createdForm;
	createdForm = findForm(form, target);

	if (createdForm == NULL)
		std::cerr << "Could not make form " << form << std::endl;
	else
		std::cout << "Intern creates " << form << " form" << std::endl;
	return (createdForm);
}

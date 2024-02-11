/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:55:36 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 14:09:27 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("NoTarget") {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy.getName(), 145, 137), _target(getTarget()) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &base) {
	if (this != &base)
	{
		this->_target = base._target;
	}
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return;
}

std::string	ShrubberyCreationForm::getTarget(void) const {
	return(this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	AForm::executeCheck(executor);
	//todo
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& base) {
	out << base.getName() << " is signed: " << base.getIsSigned() << "." << std::endl;
	out << base.getName() << " grade to sign: " << base.getGradeToSign() << "." << std::endl;
	out << base.getName() << " grade to execute: " << base.getGradeToExecute() << "." << std::endl;
	out << base.getName() << " target: " << base.getTarget() << "." << std::endl;
	return out;
}

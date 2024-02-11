/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:29:46 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 14:08:48 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("NoTarget") {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy.getName(), 25, 5), _target(getTarget()) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &base) {
	if (this != &base)
	{
		this->_target = base._target;
	}
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return;
}

std::string	PresidentialPardonForm::getTarget(void) const {
	return(this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	AForm::executeCheck(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm& base) {
	out << base.getName() << " is signed: " << base.getIsSigned() << "." << std::endl;
	out << base.getName() << " grade to sign: " << base.getGradeToSign() << "." << std::endl;
	out << base.getName() << " grade to execute: " << base.getGradeToExecute() << "." << std::endl;
	out << base.getName() << " target: " << base.getTarget() << "." << std::endl;
	return out;
}

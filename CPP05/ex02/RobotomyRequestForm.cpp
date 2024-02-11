/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:53:23 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 14:09:23 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("NoTarget") {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm(copy.getName(), 72, 45), _target(getTarget()) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &base) {
	if (this != &base)
	{
		this->_target = base._target;
	}
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return;
}

std::string	RobotomyRequestForm::getTarget(void) const {
	return(this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	AForm::executeCheck(executor);
	//todo
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& base) {
	out << base.getName() << " is signed: " << base.getIsSigned() << "." << std::endl;
	out << base.getName() << " grade to sign: " << base.getGradeToSign() << "." << std::endl;
	out << base.getName() << " grade to execute: " << base.getGradeToExecute() << "." << std::endl;
	out << base.getName() << " target: " << base.getTarget() << "." << std::endl;
	return out;
}

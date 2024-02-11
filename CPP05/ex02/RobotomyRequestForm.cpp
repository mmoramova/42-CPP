/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:53:23 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 19:05:36 by mmoramov         ###   ########.fr       */
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
	std::cout << "*** SOME DRILLING NOISE ***" << std::endl;
	srand(time(0));
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << getTarget() << " has not been robotomized." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& base) {
	out << "\033[0;92m" << std::endl;
	out << base.getName() << " is signed: " << base.getIsSigned() << "." << std::endl;
	out << base.getName() << " grade to sign: " << base.getGradeToSign() << "." << std::endl;
	out << base.getName() << " grade to execute: " << base.getGradeToExecute() << "." << std::endl;
	out << base.getName() << " target: " << base.getTarget() << "." << std::endl;
	out << "\033[0;39m";
	return out;
}

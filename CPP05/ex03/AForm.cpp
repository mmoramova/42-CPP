/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:13:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 14:07:32 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Default"), _isSigned(0), _gradeToSign(150), _gradeToExecute(150) {
	std::cout << "AForm default constructor called" << std::endl;
	return;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "AForm constructor called" << std::endl;
	return;
}

AForm::AForm(AForm const &copy) : _name(copy._name), _isSigned(0), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {
	std::cout << "AForm copy constructor called" << std::endl;
	return;
}

AForm &AForm::operator=(AForm const &base) {
	if (this != &base)
	{
		this->_isSigned = base._isSigned;
	}
	std::cout << "AForm copy assignment operator called" << std::endl;
	return *this;
}

AForm::~AForm(void) {
	std::cout << "AForm destructor called" << std::endl;
	return;
}

std::string	AForm::getName(void) const {
	return(this->_name);
}

bool	AForm::getIsSigned(void) const {
	return(this->_isSigned);
}

int	AForm::getGradeToSign(void) const {
	return(this->_gradeToSign);
}

int	AForm::getGradeToExecute(void) const {
	return(this->_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat &person) {
	if (person.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	_isSigned = 1;
}

void	AForm::executeCheck(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	if (this->getIsSigned() == 0)
		throw FormNotSignedException();
}

std::ostream& operator<<(std::ostream& out, const AForm& base) {
	out << base.getName() << " is signed: " << base.getIsSigned() << "." << std::endl;
	out << base.getName() << " grade to sign: " << base.getGradeToSign() << "." << std::endl;
	out << base.getName() << " grade to execute: " << base.getGradeToExecute() << "." << std::endl;
	return out;
}

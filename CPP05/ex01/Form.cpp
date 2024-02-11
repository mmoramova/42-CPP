/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:22:34 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 13:08:45 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _isSigned(0), _gradeToSign(150), _gradeToExecute(150) {
	std::cout << "Form default constructor called" << std::endl;
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
	return;
}

Form::Form(Form const &copy) : _name(copy._name), _isSigned(0), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {
	std::cout << "Form copy constructor called" << std::endl;
	return;
}

Form &Form::operator=(Form const &base) {
	if (this != &base)
	{
		this->_isSigned = base._isSigned;
	}
	std::cout << "Form copy assignment operator called" << std::endl;
	return *this;
}

Form::~Form(void) {
	std::cout << "Form destructor called" << std::endl;
	return;
}

std::string	Form::getName( void ) const {
	return(this->_name);
}

bool	Form::getIsSigned( void ) const {
	return(this->_isSigned);
}

int	Form::getGradeToSign(void) const {
	return(this->_gradeToSign);
}

int	Form::getGradeToExecute(void) const {
	return(this->_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat &person) {
	if (person.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	_isSigned = 1;
}

std::ostream& operator<<(std::ostream& out, const Form& base) {
	out << base.getName() << " is signed: " << base.getIsSigned() << "." << std::endl;
	out << base.getName() << " grade to sign: " << base.getGradeToSign() << "." << std::endl;
	out << base.getName() << " grade to execute: " << base.getGradeToExecute() << "." << std::endl;
	return out;
}

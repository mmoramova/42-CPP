/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:41:28 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/22 19:05:24 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("NoName"), _grade(150) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( std::string name) : _name(name), _grade(150) {
	std::cout << "Bureaucrat constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( std::string name, int grade) : _name(name) {
	setGrade(grade);
	std::cout << "Bureaucrat constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name), _grade(copy._grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &base) {
	if (this != &base)
	{
		this->_grade = base._grade;
	}
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat destructor called" << std::endl;
	return;
}

std::string	Bureaucrat::getName( void ) const {
	return(this->_name);
}

void Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat grade set to: " << grade << std::endl;
		this->_grade = grade;
	return;
}

int	Bureaucrat::getGrade(void) const {
	return(this->_grade);
}

void	Bureaucrat::incrementGrade(void) {
	this->setGrade(this->getGrade() - 1);
}

void	Bureaucrat::decrementGrade(void) {
	this->setGrade(this->getGrade() + 1);
}

void Bureaucrat::signForm(Form &form) {
	if (form.getIsSigned() == 1)
	{
		std::cout << "Form " << form.getName() << " is already signed" << std::endl;
		return;
	}
	try
	{
		form.beSigned(*this);
		if (form.getIsSigned() == 1)
			std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what()  << std::endl;
	}
	return;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& base) {
	out << base.getName() << ", bureaucrat grade " << base.getGrade() << "." << std::endl;
	return out;
}

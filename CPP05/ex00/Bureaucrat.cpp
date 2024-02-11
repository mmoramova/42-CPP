/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:41:28 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 10:17:43 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( std::string name) : _name(name) {
	std::cout << "Bureaucrat constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name) {
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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& base) {
	out << base.getName() << ", bureaucrat grade " << base.getGrade() << "." << std::endl;
	return out;
}

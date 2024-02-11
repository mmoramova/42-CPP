/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:55:36 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 19:10:10 by mmoramov         ###   ########.fr       */
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
	std::string asciiTree;

	AForm::executeCheck(executor);

	int N = 11;
	if (N % 2 == 1)
		N--;
	if (N < 5)
		N = 5;

	for (int i = 0; i < N / 2 + 1; i++)
	{
		for (int k = 0; k < executor.getGrade(); k++)
		{
			for (int j = i; j < N / 2; j++)
				asciiTree += " ";
			for (int j = N - i*2 - 1; j < N; j++)
				asciiTree += "*";
			for (int j = i; j < N / 2; j++)
				asciiTree += " ";
			asciiTree += " ";
		}
		asciiTree += "\n";
	}
	for (int k = 0; k < executor.getGrade(); k++)
	{
		for (int j = 0; j < N / 2 - 1; j++)
			asciiTree += " ";
		for (int j = 0; j < 3; j++)
			asciiTree += "|";
		for (int j = 0; j < N / 2 - 1; j++)
			asciiTree += " ";
		asciiTree += " ";
	}

	std::ofstream outfile (getTarget() + "_shrubbery");
	outfile << asciiTree;
	outfile.close();
}

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& base) {
	out << "\033[0;94m" << std::endl;
	out << base.getName() << " is signed: " << base.getIsSigned() << "." << std::endl;
	out << base.getName() << " grade to sign: " << base.getGradeToSign() << "." << std::endl;
	out << base.getName() << " grade to execute: " << base.getGradeToExecute() << "." << std::endl;
	out << base.getName() << " target: " << base.getTarget() << "." << std::endl;
	out << "\033[0;39m";
	return out;
}

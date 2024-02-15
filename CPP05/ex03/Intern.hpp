/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:14:18 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/15 18:12:00 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_H
# define Intern_H

#include <iomanip>
#include <iostream>
#include <exception>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern {

public:
	Intern(void);
	Intern(Intern const &copy);
	Intern &operator=(Intern const &base);
	~Intern(void);

	AForm *makeForm(std::string form, std::string target);
	AForm *findForm(std::string form, std::string target);
	AForm *MakeShrubberyCreationForm(std::string target);
	AForm *MakeRobotomyRequestForm(std::string target);
	AForm *MakePresidentialPardonForm(std::string target);

private:

};

#endif

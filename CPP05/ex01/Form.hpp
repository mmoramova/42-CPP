/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:23:10 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 13:09:08 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_H
# define Form_H

#include <iomanip>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
	Form(void);
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(Form const &copy);
	Form &operator=(Form const &base);
	~Form(void);

	std::string		getName (void) const;
	bool			getIsSigned (void) const;
	int				getGradeToSign (void) const;
	int				getGradeToExecute (void) const;
	void			beSigned(const Bureaucrat &person);

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw() {
			return ("Grade is too high");
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw() {
			return ("Grade is too low");
		}
	};

private:

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

};

std::ostream& operator<<(std::ostream& out, const Form& base);

#endif

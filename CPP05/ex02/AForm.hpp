/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:12:45 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 14:11:31 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_H
# define AForm_H

#include <iomanip>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

public:
	AForm(void);
	AForm(std::string name, int gradeToSign, int gradeToExecute);
	AForm(AForm const &copy);
	AForm &operator=(AForm const &base);
	virtual ~AForm(void);

	std::string		getName (void) const;
	bool			getIsSigned (void) const;
	int				getGradeToSign (void) const;
	int				getGradeToExecute (void) const;
	void			beSigned(const Bureaucrat &person);
	virtual void	execute(Bureaucrat const & executor) const = 0;
	void			executeCheck(Bureaucrat const & executor) const;

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

	class FormNotSignedException : public std::exception {
	public:
		const char* what() const throw() {
			return ("Form is not signed");
		}
	};

private:

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

};

std::ostream& operator<<(std::ostream& out, const AForm& base);

#endif

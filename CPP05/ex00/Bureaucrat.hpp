/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:41:39 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/22 19:05:41 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_H
# define Bureaucrat_H

#include <iomanip>
#include <iostream>
#include <exception>

class Bureaucrat {

public:
	Bureaucrat(void);
	Bureaucrat(std::string name);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat &operator=(Bureaucrat const &base);
	~Bureaucrat(void);

	void			setGrade(int grade);
	std::string		getName (void) const;
	int				getGrade (void) const;
	void			incrementGrade(void);
	void			decrementGrade(void);

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
	int					_grade;

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& base);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:12:45 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 19:10:11 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_H
# define ShrubberyCreationForm_H

#include <iomanip>
#include <iostream>
#include <exception>
#include <fstream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &base);
	~ShrubberyCreationForm(void);

	std::string		getTarget(void) const;
	void			execute(Bureaucrat const & executor) const;

private:
	std::string		_target;
};

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& base);

#endif

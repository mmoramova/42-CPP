/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:27:42 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 13:52:26 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_H
# define PresidentialPardonForm_H

#include <iomanip>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &base);
	~PresidentialPardonForm(void);

	std::string		getTarget(void) const;
	void			execute(Bureaucrat const & executor) const;

private:
	std::string		_target;
};

std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm& base);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:27:42 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 13:53:55 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_H
# define RobotomyRequestForm_H

#include <iomanip>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &base);
	~RobotomyRequestForm(void);

	std::string		getTarget(void) const;
	void			execute(Bureaucrat const & executor) const;

private:
	std::string		_target;
};

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& base);

#endif

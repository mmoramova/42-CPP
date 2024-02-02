/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:39:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/02 18:23:35 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_H
# define Animal_H

#include <iomanip>
#include <iostream>

class Animal {

public:
	Animal(void);
	Animal(std::string type);
	Animal(Animal const &copy);
	Animal &operator=(Animal const &base);
	virtual ~Animal(void);

	virtual void	makeSound(void) const;
	void			setType(std::string type);
	std::string		getType (void) const;

protected:

	std::string		_type;

};

std::ostream& operator<<(std::ostream& out, const Animal& base);

#endif

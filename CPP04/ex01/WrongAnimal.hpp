/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:06:46 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/02 19:06:48 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_H
# define WrongAnimal_H

#include <iomanip>
#include <iostream>

class WrongAnimal {

public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &copy);
	WrongAnimal &operator=(WrongAnimal const &base);
	virtual ~WrongAnimal(void);

	virtual void	makeSound(void) const;
	void			setType(std::string type);
	std::string		getType (void) const;

protected:

	std::string		_type;

};

std::ostream& operator<<(std::ostream& out, const WrongAnimal& base);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:39:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/03 13:16:39 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_H
# define AAnimal_H

#include <iomanip>
#include <iostream>

class AAnimal {

public:
	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(AAnimal const &copy);
	AAnimal &operator=(AAnimal const &base);
	virtual ~AAnimal(void);

	virtual void	makeSound(void) const = 0;
	void			setType(std::string type);
	std::string		getType (void) const;

protected:

	std::string		_type;

};

std::ostream& operator<<(std::ostream& out, const AAnimal& base);

#endif

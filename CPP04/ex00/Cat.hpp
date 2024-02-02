/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:39:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/01 18:43:48 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_H
# define Cat_H

#include <iomanip>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

public:
	Cat(void);
	Cat(Cat const &copy);
	Cat &operator=(Cat const &base);
	~Cat(void);

	void	makeSound(void) const;

protected:

};

std::ostream& operator<<(std::ostream& out, const Cat& base);

#endif

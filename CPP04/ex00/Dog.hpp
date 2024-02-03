/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:39:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/02 19:41:57 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_H
# define Dog_H

#include <iomanip>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog(void);
	Dog(Dog const &copy);
	Dog &operator=(Dog const &base);
	~Dog(void);

	void	makeSound(void) const;

private:

};

std::ostream& operator<<(std::ostream& out, const Dog& base);

#endif

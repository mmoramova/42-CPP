/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:39:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/03 13:17:20 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_H
# define Dog_H

#include <iomanip>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

public:
	Dog(void);
	Dog(Dog const &copy);
	Dog &operator=(Dog const &base);
	~Dog(void);

	void		makeSound(void) const;
	void		setIdea(int i, std::string idea);
	std::string	getIdea(int i) const;

private:
	Brain *dogBrain;
};

std::ostream& operator<<(std::ostream& out, const Dog& base);

#endif

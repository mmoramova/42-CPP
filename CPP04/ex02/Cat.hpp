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
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

public:
	Cat(void);
	Cat(Cat const &copy);
	Cat &operator=(Cat const &base);
	~Cat(void);

	void		makeSound(void) const;
	void		setIdea(int i, std::string idea);
	std::string	getIdea(int i) const;

private:
	Brain *catBrain;
};

std::ostream& operator<<(std::ostream& out, const Cat& base);

#endif

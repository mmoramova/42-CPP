/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:08:57 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 17:09:11 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_H
# define Cure_H

#include <iomanip>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure(void);
	Cure(Cure const &copy);
	Cure &operator=(Cure const &base);
	~Cure(void);

	AMateria* clone() const;
	void use(ICharacter& target);

private:

};

#endif

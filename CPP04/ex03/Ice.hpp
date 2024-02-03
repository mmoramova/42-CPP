/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:29:34 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/03 18:38:39 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_H
# define Ice_H

#include <iomanip>
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice(void);
	Ice(Ice const &copy);
	Ice &operator=(Ice const &base);
	~Ice(void);

	AMateria* clone() const;
	void use(ICharacter& target);

private:

};

#endif

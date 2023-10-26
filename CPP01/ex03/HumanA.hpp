/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:05:55 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/26 18:54:26 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {

public:

	HumanA( void );
	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );

	void		attack( void );
	void		setName( std::string name );
	std::string	getName( void );

private:

	std::string	name;
	Weapon		&weapon;

};

#endif

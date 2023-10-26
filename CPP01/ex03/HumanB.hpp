/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:11:52 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/26 18:54:22 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {

public:

	HumanB( void );
	HumanB( std::string name);
	~HumanB( void );

	void		attack( void );
	void		setWeapon( Weapon &weapon );
	void		setName( std::string name );
	std::string	getName( void );

private:

	std::string	name;
	Weapon		*weapon;

};

#endif

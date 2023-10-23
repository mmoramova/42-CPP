/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:56:55 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/23 19:04:19 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <iomanip>

class Weapon {

public:

	Weapon( void );
	Weapon( std::string type );
	~Weapon( void );

	void		setType( std::string type );
	std::string	getType( void );


private:

	std::string	type;

};

#endif

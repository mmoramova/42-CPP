/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:56:30 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/22 18:38:28 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <iomanip>

class Zombie {

public:

	Zombie( void );
	Zombie( std::string name );
	~Zombie ( void );

	void		announce( void );
	void		setName( std::string name );
	std::string	getName( void );


private:

	std::string	name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif

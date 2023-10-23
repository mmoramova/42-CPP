/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:14:00 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/23 19:02:28 by mmoramov         ###   ########.fr       */
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
	~Zombie( void );

	void		announce( void );
	void		setName( std::string name );
	std::string	getName( void );


private:

	std::string	name;

};

Zombie* zombieHorde( int N, std::string name );

#endif

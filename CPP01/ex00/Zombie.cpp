/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:56:22 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/22 18:22:23 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Zombie created" << std::endl;
	return;
}

Zombie::Zombie( std::string name ) {
	std::cout << "Zombie with name " << name << " created" << std::endl;
	setName(name);

	return;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie died " << this->getName() << std::endl;
	return;
}

void Zombie::setName( std::string name ) {
	std::cout << "Name set to " << name << std::endl;
	this->name = name;
	return;
}

std::string	Zombie::getName( void ) {
	return(this->name);
}

void Zombie::announce( void ) {
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

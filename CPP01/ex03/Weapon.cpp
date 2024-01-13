/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:59:37 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/13 14:52:16 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {
	std::cout << "Weapon created" << std::endl;
	return;
}

Weapon::Weapon( std::string type ) {
	std::cout << "Weapon with type " << type << " created" << std::endl;
	setType(type);

	return;
}

Weapon::~Weapon( void ) {
	std::cout << "Weapon " << this->getType() << " destructor called" << std::endl;
	return;
}

void Weapon::setType( std::string type ) {
	std::cout << "Type set to " << type << std::endl;
	this->type = type;
	return;
}

std::string	Weapon::getType( void ) {
	return(this->type);
}


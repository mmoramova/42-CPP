/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:12:11 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/13 15:00:47 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) : weapon (nullptr) {
	std::cout << "HumanB with name " << name << " created" << std::endl;
	setName(name);

	return;
}

HumanB::~HumanB( void ) {
	std::cout << "HumanB (" << this->getName() << ") died" << std::endl;
	return;
}

void HumanB::setName( std::string name ) {
	std::cout << "Name set to " << name << std::endl;
	this->name = name;
	return;
}

std::string	HumanB::getName( void ) {
	return(this->name);
}

void HumanB::attack( void ) {
	if (this->weapon == nullptr)
		std::cout << this->getName() << " attacks with their body" << std::endl;
	else
		std::cout << this->getName() << " attacks with their " << this->weapon->getType() << std::endl;
	return;
}

void HumanB::setWeapon( Weapon &weapon ) {
	this->weapon = &weapon;
	std::cout << this->getName() << " changed weapon to " << this->weapon->getType() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:12:11 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/23 19:12:38 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void ) {
	std::cout << "HumanB created" << std::endl;
	return;
}

HumanB::HumanB( std::string name) {
	std::cout << "HumanB with name " << name << " created" << std::endl;
	setName(name);

	return;
}

HumanB::~HumanB( void ) {
	std::cout << "HumanB died " << this->getName() << std::endl;
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
	std::cout << this->getName() << "attacks with their" << "TODO WEAPON" << std::endl;
	return;
}

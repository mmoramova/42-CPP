/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:08:16 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/23 19:10:08 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA( void ) {
	std::cout << "HumanA created" << std::endl;
	return;
}

HumanA::HumanA( std::string name, std::string weapon ) {
	std::cout << "HumanA with name " << name << " created" << std::endl;
	std::cout << "HumanA has this weapon " << weapon<< std::endl;
	setName(name);

	return;
}

HumanA::~HumanA( void ) {
	std::cout << "HumanA died " << this->getName() << std::endl;
	return;
}

void HumanA::setName( std::string name ) {
	std::cout << "Name set to " << name << std::endl;
	this->name = name;
	return;
}

std::string	HumanA::getName( void ) {
	return(this->name);
}

void HumanA::attack( void ) {
	std::cout << this->getName() << "attacks with their" << "TODO WEAPON" << std::endl;
	return;
}

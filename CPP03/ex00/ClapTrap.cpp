/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:46:52 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/15 18:40:56 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ClapTrap.hpp

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap constructor created" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
	return;
}

void ClapTrap::setHitPoints( unsigned int hitPoints ) {
	std::cout << "Hit points are set to " << hitPoints << std::endl;
	this->hitPoints = hitPoints;
	return;
}

unsigned int ClapTrap::getHitPoints( void ) {
	return(this->hitPoints);
}

void ClapTrap::setEnergyPoints( unsigned int energyPoints ) {
	std::cout << "Energy points are set to " << energyPoints << std::endl;
	this->energyPoints = energyPoints;
	return;
}

unsigned int ClapTrap::getEnergyPoints( void ) {
	return(this->energyPoints);
}

void ClapTrap::setAttackDamage( unsigned int attackDamage ) {
	std::cout << "Energy points are set to " << attackDamage << std::endl;
	this->attackDamage = attackDamage;
	return;
}

unsigned int ClapTrap::getAttackDamage( void ) {
	return(this->attackDamage);
}


void ClapTrap::attack(const std::string& target) {
	if (energyPoints < 1)
		std::cout << "No energy points." << std::endl;
	else {
		this->energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {

}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints < 1)
		std::cout << "No energy points." << std::endl;
	else {
		this->hitPoints += amount;
		this->energyPoints -= 1;
	}
}

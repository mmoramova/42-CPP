/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:50:09 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 14:55:16 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default", 100, 50, 20) {
	std::cout << "\033[0;92mScavTrap " << getName() << " \033[0m";
	std::cout << "constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "\033[0;92mScavTrap " << getName() << " \033[0m";
	std::cout << "constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &copy) {
	this->setName(copy.getName());
	this->setHitPoints(copy.getHitPoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	std::cout << "\033[0;92mScavTrap " << getName() << " \033[0m";
	std::cout << "copy constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &base) {
	if (this != &base)
	{
		this->setName(base.getName());
		this->setHitPoints(base.getHitPoints());
		this->setEnergyPoints(base.getEnergyPoints());
		this->setAttackDamage(base.getAttackDamage());
	}
	std::cout << "\033[0;92mScavTrap " << getName() << " \033[0m";
	std::cout << "copy assignment operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "\033[0;92mScavTrap " << getName() << " \033[0m";
	std::cout << "ScavTrap destructor called" << std::endl;
	return;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << "\033[0;92mScavTrap " << getName() << " \033[0m";
	if (this->getEnergyPoints() < 1 || this->getHitPoints() < 1)
		std::cout << "No energy or hit points left. Not possible to attack" << std::endl;
	else {
		std::cout << "attacks \033[0;92m" << target << "\033[0m who lost " << this->getAttackDamage() << " points of damage" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	std::cout << *this << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "\033[0;92mScavTrap " << getName() << " \033[0m";
	std::cout << "is now in Gatekeeper mode" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const ScavTrap& base) {
	out << "\033[0;92mScavTrap " << base.getName()
		<< " Hit Points: " << base.getHitPoints()
		<< ", Energy Points: " << base.getEnergyPoints()
		<< ", Attack Damage: " << base.getAttackDamage()
		<< " \033[0m";
	return out;
}

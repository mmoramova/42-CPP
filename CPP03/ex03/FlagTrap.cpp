/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:50:56 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/01 17:47:41 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void) : ClapTrap("Default", 100, 100 , 30) {
	std::cout << "\033[0;95mFlagTrap " << getName() << " \033[0m";
	std::cout << "constructor called" << std::endl;
	return;
}

FlagTrap::FlagTrap( std::string name) : ClapTrap(name, 100, 100 , 30) {
	std::cout << "\033[0;95mFlagTrap " << getName() << " \033[0m";
	std::cout << "constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}

FlagTrap::FlagTrap( std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) :
					ClapTrap(name, hitPoints, energyPoints, attackDamage) {
	std::cout << "\033[0;95mFlagTrap " << getName() << " \033[0m";
	std::cout << "constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}


FlagTrap::FlagTrap(FlagTrap const &copy) {
	this->setName(copy.getName());
	this->setHitPoints(copy.getHitPoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	std::cout << "\033[0;95mFlagTrap " << getName() << " \033[0m";
	std::cout << "copy constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}

FlagTrap &FlagTrap::operator=(FlagTrap const &base) {
	if (this != &base)
	{
		this->setName(base.getName());
		this->setHitPoints(base.getHitPoints());
		this->setEnergyPoints(base.getEnergyPoints());
		this->setAttackDamage(base.getAttackDamage());
	}
	std::cout << "\033[0;95mFlagTrap " << getName() << " \033[0m";
	std::cout << "copy assignment operator called" << std::endl;
	return *this;
}

FlagTrap::~FlagTrap(void) {
	std::cout << "\033[0;95mFlagTrap " << getName() << " \033[0m";
	std::cout << "FlagTrap destructor called" << std::endl;
	return;
}

void FlagTrap::highFivesGuys() {
	std::cout << "\033[0;95mFlagTrap " << getName() << " \033[0m";
	std::cout << "high fives Guys!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const FlagTrap& base) {
	out << "\033[0;95mFlagTrap " << base.getName()
		<< " Hit Points: " << base.getHitPoints()
		<< ", Energy Points: " << base.getEnergyPoints()
		<< ", Attack Damage: " << base.getAttackDamage()
		<< " \033[0m";
	return out;
}

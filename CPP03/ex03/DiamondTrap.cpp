/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:18:28 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/01 17:49:23 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FlagTrap() {
	this->_name = "Default";
	std::cout << "\033[0;93mDiamondTrap " << getName() << " \033[0m";
	std::cout << "constructor called" << std::endl;
	this->setHitPoints(FlagTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FlagTrap::getAttackDamage());
	return;
}

DiamondTrap::DiamondTrap( std::string name) : ClapTrap(name), ScavTrap(name), FlagTrap(name) {

	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->setHitPoints(_FHitPoints);
	this->setEnergyPoints(_SEnergyPoints);
	this->setAttackDamage(_FAttackDamage);
	std::cout << "\033[0;93mDiamondTrap " << getName() << " \033[0m";
	std::cout << "constructor called" << std::endl;

	std::cout << *this << std::endl;
	return;
}


DiamondTrap::DiamondTrap(DiamondTrap const &copy) {
	this->setName(copy.getName());
	this->setHitPoints(copy.getHitPoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	std::cout << "\033[0;93mDiamondTrap " << getName() << " \033[0m";
	std::cout << "copy constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &base) {
	if (this != &base)
	{
		this->setName(base.getName());
		this->setHitPoints(base.getHitPoints());
		this->setEnergyPoints(base.getEnergyPoints());
		this->setAttackDamage(base.getAttackDamage());
	}
	std::cout << "\033[0;93mDiamondTrap " << getName() << " \033[0m";
	std::cout << "copy assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "\033[0;93mDiamondTrap " << getName() << " \033[0m";
	std::cout << "DiamondTrap destructor called" << std::endl;
	return;
}

void DiamondTrap::setName( std::string name ) {
	//std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	//std::cout << "name set to " << name << std::endl;
	this->_name = name;
	return;
}

std::string	DiamondTrap::getName( void ) const {
	return(this->_name);
}

void DiamondTrap::whoAmI() {
	std::cout << "\033[0;93mDiamondTrap " << getName() << " \033[0m";
	std::cout << "DiamondTrap name is " << DiamondTrap::_name <<
	" and ClapTrap name is " << this->ClapTrap::_name << std::endl;
}

std::ostream& operator<<(std::ostream& out, const DiamondTrap& base) {
	out << "\033[0;93mDiamondTrap " << base.getName()
		<< " Hit Points: " << base.getHitPoints()
		<< ", Energy Points: " << base.getEnergyPoints()
		<< ", Attack Damage: " << base.getAttackDamage()
		<< " \033[0m";
	return out;
}
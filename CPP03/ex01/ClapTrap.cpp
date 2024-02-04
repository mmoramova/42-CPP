/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:20:46 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 14:51:24 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	std::cout << "constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	std::cout << "constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) :
					_name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage) {
	std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	std::cout << "constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &copy) : _name(copy._name), _hitPoints(copy._hitPoints),
										   _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage) {
	std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	std::cout << "copy constructor called" << std::endl;
	std::cout << *this << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &base) {
	if (this != &base)
	{
		this->setName(base.getName());
		this->setHitPoints(base.getHitPoints());
		this->setEnergyPoints(base.getEnergyPoints());
		this->setAttackDamage(base.getAttackDamage());
	}
	std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	std::cout << "copy assignment operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	std::cout << "ClapTrap destructor called" << std::endl;
	return;
}

void ClapTrap::setName( std::string name ) {
	//std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	//std::cout << "name set to " << name << std::endl;
	this->_name = name;
	return;
}

void ClapTrap::setHitPoints( unsigned int hitPoints ) {
	//std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	//std::cout << "hit points set to " << hitPoints << std::endl;
	this->_hitPoints = hitPoints;
	return;
}

void ClapTrap::setAttackDamage( unsigned int attackDamage ) {
	//std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	//std::cout << "attack damage set to " << attackDamage << std::endl;
	this->_attackDamage = attackDamage;
	return;
}

void ClapTrap::setEnergyPoints( unsigned int energyPoints ) {
	//std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	//std::cout << "energy points set to " << energyPoints << std::endl;
	this->_energyPoints = energyPoints;
	return;
}

std::string	ClapTrap::getName( void ) const {
	return(this->_name);
}

unsigned int ClapTrap::getHitPoints( void ) const {
	return(this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints( void ) const {
	return(this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage( void ) const {
	return(this->_attackDamage);
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	if (this->getEnergyPoints() < 1 || this->getHitPoints() < 1)
		std::cout << "No energy or hit points left. Not possible to attack" << std::endl;
	else {
		std::cout << "attacks \033[34m" << target << "\033[0m who lost " << this->getAttackDamage() << " points of damage" << std::endl;
		this->_energyPoints = this->getEnergyPoints() - 1;
	}
	std::cout << *this << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	if (this->getEnergyPoints() < 1 || this->getHitPoints() < 1)
		std::cout << "No energy or hit points left. Not possible to take damage" << std::endl;
	else if (this->getHitPoints() - amount < 0) {
		std::cout << "took damage and lost " << this->getHitPoints() << " of hit points" << std::endl;
		this->_hitPoints = 0;
	}
	else {
		this->_hitPoints = this->getHitPoints() - amount;
		std::cout << "took damage and lost " << amount << " of hit points" << std::endl;
	}
	std::cout << *this << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "\033[34mClapTrap " << getName() << " \033[0m";
	if (this->getEnergyPoints() < 1 || this->getHitPoints() < 1)
		std::cout << "No energy or hit points left. Not possible to repair" << std::endl;
	else {
		this->_hitPoints = this->getHitPoints() + amount;
		this->_energyPoints = this->getEnergyPoints() - 1;
		std::cout << "repairs itself and gets " << amount << " hit points back" << std::endl;
	}
	std::cout << *this << std::endl;
}

std::ostream& operator<<(std::ostream& out, const ClapTrap& base) {
	out << "\033[34mClapTrap " << base.getName()
		<< " Hit Points: " << base.getHitPoints()
		<< ", Energy Points: " << base.getEnergyPoints()
		<< ", Attack Damage: " << base.getAttackDamage()
		<< " \033[0m";
	return out;
}

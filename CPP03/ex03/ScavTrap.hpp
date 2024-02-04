/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:50:13 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 15:03:31 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_H
# define ScavTrap_H

#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &copy);
	ScavTrap &operator=(ScavTrap const &base);
	~ScavTrap(void);

	void attack(const std::string& target);
	void guardGate();

protected:

	unsigned int static const	_SHitPoints = 100;
	unsigned int static const	_SEnergyPoints = 50;
	unsigned int static const	_SAttackDamage = 20;

};

std::ostream& operator<<(std::ostream& out, const ScavTrap& base);


#endif

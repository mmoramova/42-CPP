/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:51:06 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/01 17:45:06 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FlagTrap_H
# define FlagTrap_H

#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class FlagTrap : virtual public ClapTrap {

public:

	FlagTrap(void);
	FlagTrap(std::string name);
	FlagTrap( std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
	FlagTrap(FlagTrap const &copy);
	FlagTrap &operator=(FlagTrap const &base);
	~FlagTrap(void);

	void highFivesGuys();

protected:

	unsigned int static const	_FHitPoints = 100;
	unsigned int static const	_FEnergyPoints = 100;
	unsigned int static const	_FAttackDamage = 30;
};

std::ostream& operator<<(std::ostream& out, const FlagTrap& base);


#endif

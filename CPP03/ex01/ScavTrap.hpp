/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:22:00 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/22 17:36:00 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_H
# define ScavTrap_H

#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap( std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
	ScavTrap(ScavTrap const &copy);
	ScavTrap &operator=(ScavTrap const &base);
	~ScavTrap(void);

	void attack(const std::string& target);
	void guardGate();

private:


};

std::ostream& operator<<(std::ostream& out, const ScavTrap& base);


#endif

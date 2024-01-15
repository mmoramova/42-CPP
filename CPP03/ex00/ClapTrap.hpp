/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:47:00 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/15 18:42:22 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H
# define ClapTrap_H

#include <iomanip>
#include <iostream>

class ClapTrap {

public:
	ClapTrap(void);
	~ClapTrap(void);

	void			setHitPoints(unsigned int hitPoints);
	unsigned int	getHitPoints(void);
	void			setEnergyPoints(unsigned int energyPoints);
	unsigned int	getEnergyPoints(void);
	void			setAttackDamage(unsigned int attackDamage);
	unsigned int	getAttackDamage(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:

	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;

};

#endif

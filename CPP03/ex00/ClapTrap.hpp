/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:47:00 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 11:13:23 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H
# define ClapTrap_H

#include <iomanip>
#include <iostream>

class ClapTrap {

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &copy);
	ClapTrap &operator=(ClapTrap const &base);
	~ClapTrap(void);

	void			setName(std::string name);
	void			setHitPoints(unsigned int hitPoints);
	void			setEnergyPoints(unsigned int energyPoints);
	void			setAttackDamage(unsigned int attackDamage);

	std::string		getName (void) const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
	unsigned int	getAttackDamage(void) const;

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

private:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

};

std::ostream& operator<<(std::ostream& out, const ClapTrap& base);

#endif

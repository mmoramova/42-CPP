/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:18:37 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/01 17:48:40 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DiamondTrap_H
# define DiamondTrap_H

#include <iomanip>
#include <iostream>
#include "FlagTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap {

public:

	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &copy);
	DiamondTrap &operator=(DiamondTrap const &base);
	~DiamondTrap(void);

	void			setName(std::string name);
	std::string		getName (void) const;

	void whoAmI();

private:

	std::string		_name;

};

std::ostream& operator<<(std::ostream& out, const DiamondTrap& base);


#endif

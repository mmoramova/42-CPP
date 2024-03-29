/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:51:06 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 14:54:37 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FlagTrap_H
# define FlagTrap_H

#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {

public:

	FlagTrap(void);
	FlagTrap(std::string name);
	FlagTrap(FlagTrap const &copy);
	FlagTrap &operator=(FlagTrap const &base);
	~FlagTrap(void);

	void highFivesGuys();

private:


};

std::ostream& operator<<(std::ostream& out, const FlagTrap& base);


#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:46:43 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/22 17:19:34 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap A("J");
	ClapTrap B;
	B.setName("B");

	A.attack("I");
	A.setAttackDamage(2);
	A.attack("I");
	A.takeDamage(1);
	A.takeDamage(1);
	A.beRepaired(1);

	ClapTrap C ("X", 10, 10, 10);

	return (0);
}

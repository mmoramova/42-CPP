/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:49:56 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/01 18:29:32 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int main (void)
{
	ScavTrap A("A");
	ScavTrap B;
	B.setName("B");
	ClapTrap C("C");
	FlagTrap D("D");

	A.attack("I");
	A.attack("I");
	A.setAttackDamage(2);
	A.attack("I");
	A.takeDamage(10);
	A.beRepaired(1);

	A.guardGate();
	//B = A;
	B.setName("B");
	A.attack("I");
	B.attack("I");
	//C.guardGate();
	D.attack("a");
	D.beRepaired(20);
	D.highFivesGuys();

	DiamondTrap E("E");
	DiamondTrap F;
	E.whoAmI();
	F = E;
	E.attack("A");
	F.attack("A");
	F.beRepaired(1);
	F.whoAmI();

	return (0);
}

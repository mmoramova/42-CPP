/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:49:56 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 15:03:10 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main (void)
{
	ScavTrap A("A");
	ScavTrap B;
	B.setName("B");
	ClapTrap C("C");
	FlagTrap D("D");
	FlagTrap E;

	D.attack("A");
	E = D;
	E.setName("E");

	D.attack("E");
	E.takeDamage(D.getAttackDamage());
	D.setAttackDamage(2);
	D.attack("E");
	E.takeDamage(D.getAttackDamage());
	D.takeDamage(10);

	E.attack("D");
	D.takeDamage(E.getAttackDamage());
	E.setAttackDamage(2);
	E.attack("D");
	D.takeDamage(E.getAttackDamage());
	E.beRepaired(1);

	A.guardGate();
	B.setName("B");
	A.attack("I");
	B.attack("I");
	D.attack("a");
	D.beRepaired(20);
	D.highFivesGuys();

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:49:56 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/23 18:13:15 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main (void)
{
	ScavTrap A("M");
	ScavTrap B;
	B.setName("B");
	ClapTrap C("X");
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
	

	// D ("X", 10, 10, 10);

	return (0);
}

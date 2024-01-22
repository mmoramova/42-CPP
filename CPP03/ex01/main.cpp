/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:20:56 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/22 18:23:48 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap A("M");
	ScavTrap B;
	B.setName("B");
	ClapTrap C("X");

	A.attack("I");
	A.attack("I");
	A.setAttackDamage(2);
	A.attack("I");
	A.takeDamage(10);
	A.beRepaired(1);

	A.guardGate();
	B = A;
	B.setName("B");
	A.attack("I");
	B.attack("I");
	//C.guardGate();
	//ScavTrap D ("X", 10, 10, 10);

	return (0);
}

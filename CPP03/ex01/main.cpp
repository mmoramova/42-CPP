/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:20:56 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 14:56:00 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap A("A");
	ScavTrap B;
	B.setName("B");
	ClapTrap C("C");

	A.attack("I");
	A.attack("I");
	A.setAttackDamage(2);
	A.attack("I");
	A.takeDamage(10);
	A.beRepaired(1);

	A.guardGate();
	B = A;
	B.setName("BB");
	A.attack("I");
	B.attack("I");
	//C.guardGate();

	return (0);
}

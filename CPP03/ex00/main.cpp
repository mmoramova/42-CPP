/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:46:43 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 14:56:10 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap A("A");
	ClapTrap B;
	B.setName("B");

	A.attack("I");
	A.setAttackDamage(2);
	A.attack("I");
	A.takeDamage(1);
	A.takeDamage(2);
	A.beRepaired(1);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:49:56 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 15:07:46 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
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

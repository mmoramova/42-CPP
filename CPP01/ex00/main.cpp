/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:56:09 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/22 18:56:12 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie	zombie ("J");
	zombie.announce();

	randomChump("A");

	Zombie *zombie2;
	zombie2 = newZombie("B");
	zombie2->announce();

	randomChump("C");
	delete zombie2;

	return 0;
}

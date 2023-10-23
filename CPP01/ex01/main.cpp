/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:14:19 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/23 18:19:47 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	int N = 20;

	Zombie	zombie ("J");
	zombie.announce();

	Zombie *zombie2;
	zombie2 = zombieHorde(N, "B");

	for (int i = 0; i < N; i++) {
		zombie2[i].announce();
	}

	delete[] zombie2;
	return 0;
}

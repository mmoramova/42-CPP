/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:13:54 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/23 18:13:56 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
 	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombie[i].setName(name);
	}
	return (zombie);
}

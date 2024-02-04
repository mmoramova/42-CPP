/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:38:05 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/04 16:53:57 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
	//const AAnimal* meta = new AAnimal();
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	dog->makeSound();
	cat->makeSound();
	//meta->makeSound();

	delete dog;
	delete cat;
	//delete meta;

	/*------------------------------------------*/
	/*int N = 20;

	AAnimal *AAnimals[20];

	for (int i = 0; i < N; i++) {
		if (i < N / 2)
			AAnimals[i] = new Dog();
		else
			AAnimals[i] = new Cat();
	}

	for (int i = 0; i < N; i++) {
		AAnimals[i]->makeSound();
	}

	for (int i = 0; i < N; i++) {
		delete AAnimals[i];
	}*/

	return (0);
}

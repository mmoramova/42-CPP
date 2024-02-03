/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:38:05 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/03 13:12:08 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void)
{
	/*const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	delete dog;
	delete cat;
	delete meta;*/

	/*------------------------------------------*/
	int N = 20;

	Animal *Animals[20];

	for (int i = 0; i < N; i++) {
		if (i < N / 2)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}

	for (int i = 0; i < N; i++) {
		Animals[i]->makeSound();
	}

	for (int i = 0; i < N; i++) {
		delete Animals[i];
	}
	/*------------------------------------------*/
	/*Dog dog1;

	dog1.setIdea(0, "dog idea 1");
	std::cout << dog1.getIdea(0) << " " << std::endl;
	std::cout << dog1.getIdea(1) << " " << std::endl;

	Dog dog2 = dog1;

	dog2.setIdea(0, "dog2 idea 1");
	std::cout << dog1.getIdea(0) << " " << std::endl;
	std::cout << dog1.getIdea(1) << " " << std::endl;
	std::cout << dog2.getIdea(0) << " " << std::endl;
	std::cout << dog2.getIdea(1) << " " << std::endl;

	Dog dog3(dog2);
	dog2.setIdea(0, "dog2 idea 2");
	dog3.setIdea(0, "dog3 idea 1");
	std::cout << dog2.getIdea(0) << " " << std::endl;
	std::cout << dog2.getIdea(1) << " " << std::endl;
	std::cout << dog3.getIdea(0) << " " << std::endl;
	std::cout << dog3.getIdea(1) << " " << std::endl;

	dog1.makeSound();*/

	/*------------------------------------------*/
	/*Cat cat1;

	cat1.setIdea(0, "cat idea 1");
	std::cout << cat1.getIdea(0) << " " << std::endl;
	std::cout << cat1.getIdea(1) << " " << std::endl;

	Cat cat2 = cat1;

	cat2.setIdea(0, "cat2 idea 1");
	std::cout << cat1.getIdea(0) << " " << std::endl;
	std::cout << cat1.getIdea(1) << " " << std::endl;
	std::cout << cat2.getIdea(0) << " " << std::endl;
	std::cout << cat2.getIdea(1) << " " << std::endl;

	Cat cat3(cat2);
	cat2.setIdea(0, "cat2 idea 2");
	cat3.setIdea(0, "cat3 idea 1");
	std::cout << cat2.getIdea(0) << " " << std::endl;
	std::cout << cat2.getIdea(1) << " " << std::endl;
	std::cout << cat3.getIdea(0) << " " << std::endl;
	std::cout << cat3.getIdea(1) << " " << std::endl;

	cat1.makeSound();*/

	return (0);
}

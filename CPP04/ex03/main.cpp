/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:28:29 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/08 18:35:57 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main (void)
{
	/*Ice ice1;

	std::cout << ice1.getType() << std::endl;

	Character char1("JA");
	std::cout << char1.getName() << std::endl;
	ice1.use(char1);

	AMateria *clonedIce = ice1.clone();
	delete clonedIce;*/
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	//me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	return 0;
}

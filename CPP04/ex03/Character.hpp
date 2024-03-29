/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:49:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 09:13:28 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <iomanip>
#include <iostream>
#include "ICharacter.hpp"


class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(Character const &copy);
		Character &operator=(Character const &base);
		~Character(void);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		std::string const & getInventoryType(int idx) const;

	private:
		std::string _name;
		AMateria 	*_inventory[4];

};

std::ostream& operator<<(std::ostream& out, const Character& base);

#endif

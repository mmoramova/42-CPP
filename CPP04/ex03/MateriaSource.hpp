/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:00:42 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 09:01:49 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <iomanip>
#include <iostream>
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &copy);
		MateriaSource &operator=(MateriaSource const &base);
		~MateriaSource(void);

		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
		std::string const & getInventoryType(int idx) const;

	private:
		AMateria *_inventory[4];
};

std::ostream& operator<<(std::ostream& out, const MateriaSource& base);

#endif

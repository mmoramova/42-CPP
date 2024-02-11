/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:38:44 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/11 09:31:40 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iomanip>
#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

class ICharacter;
class IMateriaSource;

class AMateria
{
	protected:
		std::string _type;

	public:

		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &base);
		virtual ~AMateria(void);

		void				setType(std::string type);
		std::string const & getType() const;
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif

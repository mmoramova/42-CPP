/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:08:17 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/02 19:42:19 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_H
# define WrongCat_H

#include <iomanip>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat(void);
	WrongCat(WrongCat const &copy);
	WrongCat &operator=(WrongCat const &base);
	~WrongCat(void);

	void	makeSound(void) const;

private:

};

std::ostream& operator<<(std::ostream& out, const WrongCat& base);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:11:52 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/23 19:12:43 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <iomanip>

class HumanB {

public:

	HumanB( void );
	HumanB( std::string name);
	~HumanB( void );

	void		attack( void );
	void		setName( std::string name );
	std::string	getName( void );

private:

	std::string	name;

};

#endif

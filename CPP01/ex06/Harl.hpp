/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:28:44 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/26 19:28:45 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_H
# define Harl_H

#include <iostream>
#include <iomanip>

class Harl {

public:

	Harl( void );
	~Harl ( void );

	void complain( std::string level );

private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void invalidInput( void );

};

#endif

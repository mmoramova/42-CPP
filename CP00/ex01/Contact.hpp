/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:25:00 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/21 16:38:09 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
//#include "PhoneBook.hpp"

#ifndef CONTACT_H
# define CONTACT_H

class Contact {

public:

	Contact( void );
	~Contact ( void );

	void addContact( void );
	int checkContactData( std::string strAdd[5] );
	void setContactData( std::string strAdd[5] );
	int checkInput( std::string str );
};

#endif

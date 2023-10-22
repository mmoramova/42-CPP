/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:33:45 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/22 15:05:18 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook ( void );

	void addNewContact( void );
	void searchContact( void );

private:

	Contact _contacts[8];
	int 	_totalAddedContacts;

};

#endif

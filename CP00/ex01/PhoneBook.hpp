/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:33:45 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/21 16:38:06 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

class PhoneBook : public Contact {

public:

	PhoneBook( void );
	~PhoneBook ( void );

	std::string Contact[8];

	void addNewContact( void );
};

#endif

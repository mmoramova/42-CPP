/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:03:53 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/21 16:30:22 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook( void ) {

	std::cout << "Constructor PhoneBook called" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "Destructor PhoneBook called" << std::endl;
	return;
}

void PhoneBook::addNewContact( void ) {

	class Contact contact;

	contact.addContact();
}

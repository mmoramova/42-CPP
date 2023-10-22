/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:03:53 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/22 16:48:02 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook( void ) {
	_totalAddedContacts = 0;
	return;
}

PhoneBook::~PhoneBook( void ) {
	return;
}

void PhoneBook::addNewContact( void ) {
	_contacts[_totalAddedContacts % 8].addContact();
	if (_contacts[_totalAddedContacts % 8].error == 0)
		_totalAddedContacts++;

}

void PhoneBook::searchContact( void ) {
	int index;

	if (_contacts[0].isEmpty() == 1)
	{
		std::cout << "There are no contacts to show. You can add a new contact with a command ADD. Redirecting back to the menu." << std::endl;
		return;
	}

	std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::setfill(' ') << std::endl;
	std::cout << "|"
			  << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First name" << "|"
			  << std::setw(10) << "Last name" << "|"
			  << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::setfill(' ') << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (_contacts[i].isEmpty() == 0)
			_contacts[i].showContactHeader(i);
	}
	std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::setfill(' ') << std::endl;

	std::cout << "Please select an index to show all contact information: " << std::endl;
	std::cin >> index;
	if (std::cin.fail() || index < 0 || index > 7 || _contacts[index].isEmpty() == 1)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Error: Invalid input. Redirecting back to the menu." << std::endl;
	}
	else
		_contacts[index].showContact();
}


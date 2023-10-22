/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:24:34 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/22 16:50:52 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	_contactIsEmpty = 1;
	return;
}

Contact::~Contact( void ) {
	return;
}

std::string	Contact::getFirstName( void ) {
	return (Contact::_firstName);
}

std::string	Contact::getLastName( void ) {
	return (Contact::_lastName);
}

std::string	Contact::getNickname( void ) {
	return (Contact::_nickname);
}

std::string	Contact::getPhoneNumber( void ) {
	return (Contact::_phoneNumber);
}

std::string	Contact::getDarkestSecret( void ) {
	return (Contact::_darkestSecret);
}

void Contact::addContact( void ) {

	this->error = 0;
	std::string data[5];

	if (this->error == 0)
		data[0] = _getContactData("First Name");
	if (this->error == 0)
		data[1] = _getContactData("Last Name");
	if (this->error == 0)
		data[2] = _getContactData("Nickname");
	if (this->error == 0)
		data[3] = _getContactData("Phone number");
	if (this->error == 0)
		data[4] = _getContactData("Darkest secret");

	if (this->error == 0)
	{
		this->_firstName = data[0];
		this->_lastName = data[1];
		this->_nickname = data[2];
		this->_phoneNumber = data[3];
		this->_darkestSecret = data[4];
		std::cout << "Contact added. Redirecting back to the menu." << std::endl;
		this->_contactIsEmpty = 0;
	}
	return;
}

void Contact::showContact( void ) {

	std::cout << std::endl;
	std::cout << "---- CONTACT INFORMATION ----" << std::endl;
	std::cout << "First name: " << Contact::getFirstName() << std::endl;
	std::cout << "Last name: " << Contact::getLastName() << std::endl;
	std::cout << "Nickname: " << Contact::getNickname() << std::endl;
	std::cout << "Phone number: " << Contact::getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << Contact::getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void Contact::showContactHeader( int index ) {

	std::cout << "|" << std::setw(10) << index << "|";
	Contact::_showContactHeaderColumn(Contact::getFirstName());
	Contact::_showContactHeaderColumn(Contact::getLastName());
	Contact::_showContactHeaderColumn(Contact::getNickname());
	std::cout << std::endl;
}

bool Contact::isEmpty( void ) {
	if (Contact::_contactIsEmpty == 0)
		return (0);
	return (1);
}

std::string Contact::_getContactData( std::string name ) {

	std::string line;

	std::cout << "Please enter " << name << std::endl;
	if (!std::getline(std::cin, line))
	{
		std::cout << "Input error: Redirecting back to the menu." << std::endl;
		this->error = 1;
	}
	if (line.empty())
	{
		std::cout << "Error: The input is empty. Redirecting back to the menu." << std::endl;
		this->error = 1;
	}
	else if (!name.compare("Phone number") && _containsOnlyDigits(line) == 0)
	{
		std::cout << "Error: Phone number can only contains digits. Redirecting back to the menu." << std::endl;
		this->error = 1;
	}
	return (line);
}

bool Contact::_containsOnlyDigits(std::string str)
{
	int i = 0;

	while (i < str[i])
	{
		if (!std::isdigit(str[i]))
			return 0;
		i++;
	}
	return (1);
}

void Contact::_showContactHeaderColumn( std::string string ) {

	if (string.length() > 10)
		std::cout << std::setw(9) << string.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << string << "|";
}

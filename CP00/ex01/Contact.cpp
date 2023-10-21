/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:24:34 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/21 16:41:35 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//decide if we want it
std::string toUpper(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

Contact::Contact( void ) {

	std::cout << "Constructor Contact called" << std::endl;
	return;
}

Contact::~Contact( void ) {

	std::cout << "Destructor Contact called" << std::endl;
	return;
}

void Contact::addContact( void ) {

	std::string strAdd[5];

	//getContactData //get line - read one by one
	//checkContactData // check each one if its correct
	//setContactData // put all contacts to Contact and put Contact to Contact
	std::cout << "Please enter First Name:" << std::endl;
	std::getline(std::cin, strAdd[0]);
	std::cout << "Please enter Last Name:" << std::endl;
	std::getline(std::cin, strAdd[1]);
	std::cout << "Please enter Nickname:" << std::endl;
	std::getline(std::cin, strAdd[2]);
	std::cout << "Please enter Phone number:" << std::endl;
	std::getline(std::cin, strAdd[3]);
	std::cout << "Please enter Darkest secret:" << std::endl;
	std::getline(std::cin, strAdd[4]);
}

int Contact::checkContactData( std::string strAdd[5] ) {
	return 1;
}

void Contact::setContactData( std::string strAdd[5] ) {
	return;
}

int Contact::checkInput( std::string str ) {

	int	result;

	result = 1;

	for (int i = 0; str[i]; i++)
	{
		if (std::isalpha(str[i]) == 1)
		{
			std::cout << "Its alpha: " << str[i] << std::endl;
		}
		else
		{
			std::cout << "Its not alpha: " << str[i] << std::endl;
			result = 0;
		}

	}
	if (str.length() == 0)
		result = 0;

	if (result == 0)
	{
		std::cout << "Incorrect input, try again:" << std::endl;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:07:52 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/21 16:23:22 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main (void)
{
	std::string str;
	PhoneBook phonebook;

	while (42)
	{
		std::cout << "Enter a value: ";
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
		{
			phonebook.addNewContact();
		}
		else if (str.compare("SEARCH") == 0)
		{
			std::cout << "You wrote " + str + "!!";
		}
		else if (str.compare("EXIT") == 0)
		{
			std::cout << "You wrote " + str + "!!!";
			break;
		}
		else
			std::cout << "You wrote " + str + "-wrong value";
	}
	return 0;
}

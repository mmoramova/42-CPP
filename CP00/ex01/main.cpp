/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:07:52 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/22 16:51:40 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
	std::string	str;
	PhoneBook	phonebook;

	std::cout << "Hello, ";
	while (42)
	{
		std::cout << "please enter the command ADD|SEARCH|EXIT: " << std::endl;
		if (!std::getline(std::cin, str))
		{
			std::cout << "Input error" << std::endl;
			break;
		}
		if (!str.compare("ADD"))
			phonebook.addNewContact();
		else if (!str.compare("SEARCH"))
			phonebook.searchContact();
		else if (!str.compare("EXIT"))
		{
			std::cout << "Good bye" << std::endl;
			break;
		}
		else
			std::cout << "Wrong command, ";
	}
	return 0;
}

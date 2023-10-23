/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:20:58 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/23 18:54:33 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
	//A string variable initialized to "HI THIS IS BRAIN"
	std::string s = "HI THIS IS BRAIN";

	//stringPTR: A pointer to the string.
	std::string *stringPTR = &s;

	//stringREF: A reference to the string.
	std::string &stringREF = s;

	//Your program has to print:
	//The memory address of the string variable.
	std::cout << &s << std::endl;

	//The memory address held by stringPTR.
	std::cout << stringPTR << std::endl;

	//The memory address held by stringREF.
	std::cout << &stringREF << std::endl;

	//The value of the string variable.
	std::cout << s << std::endl;

	//The value pointed to by stringPTR.
	std::cout << *stringPTR << std::endl;

	//The value pointed to by stringREF.
	std::cout << stringREF << std::endl;

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:28:59 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/15 18:25:48 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error. Please enter 1 argument" << std::endl;
		std::cout << "ERROR|DEBUG|INFO|WARNING" << std::endl;
		return 1;
	}

	Harl	harl;
	harl.complain(argv[1]);

	return 0;
}

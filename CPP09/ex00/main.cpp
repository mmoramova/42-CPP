/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:11:01 by mmoramov          #+#    #+#             */
/*   Updated: 2024/07/29 18:14:51 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Incorrect number of arguments" << std::endl;
		return (1);
	}

	BitcoinExchange exchange;
	exchange.calculate(argv[1]);
	return 0;
}

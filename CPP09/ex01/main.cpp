/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:45:37 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/17 14:14:35 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Incorrect input" << std::endl;
		return (1);
	}

	RPN::compute(argv[1]);
	return 0;
}

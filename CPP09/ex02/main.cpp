/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:12:45 by mmoramov          #+#    #+#             */
/*   Updated: 2024/08/05 18:19:59 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Incorrect input " << std::endl;
		return (1);
	}

	PmergeMe a;
	a.sort(argv);
	return 0;
}

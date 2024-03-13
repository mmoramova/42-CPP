/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:58:37 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/13 18:14:23 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	 for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		//std::cout << numbers[i] << "|" << mirror[i] << std::endl;
	}

		Array<int> tmp = numbers;
		Array<int> test(tmp);
		std::cout << test.size() << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
		if (test[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
		if (tmp[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		tmp[i] = rand();
		// std::cout << numbers[i] << "|" << mirror[i] << "|" << test[i] << std::endl;
	}
		for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != test[i])
		{
			std::cerr << "mir didn't save the same value!!" << std::endl;
			delete [] mirror;
			return 1;
		}
		if (test[i] != numbers[i])
		{
			std::cerr << "test didn't save the same value!!" << std::endl;
			delete [] mirror;
			return 1;
		}
		if (tmp[i] != test[i])
		{
			//std::cerr << "tmp didn't save the same value!!" << std::endl;
			//delete [] mirror;
			//return 1;
		}
	}
	delete [] mirror;
	return 0;
}

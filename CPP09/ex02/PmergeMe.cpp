/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:13:02 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/19 19:23:08 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(PmergeMe const &copy) {
	(void) copy;
	*this = copy;
	return;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &base) {
	(void) base;
	return *this;
}

void PmergeMe::sort(char **input) {

	int i = 1;
	std::vector<int> vec;

	while (input && input[i])
	{
		std::cout << input[i] << std::endl;
		vec.push_back(std::atoi(&input[i]));
		std::cout << "vector " << vec[i] << std::endl;
		i++;
	}

	std::cout << "end " << std::endl;
}

int PmergeMe::checkInput(std::string input) {

	int strlen = input.length();

	for (int i = 0; i < strlen; i++)
	{
		if (!std::isdigit(input[i]))
			return 1;
	}
	return 0;
}



PmergeMe::~PmergeMe(void) {}

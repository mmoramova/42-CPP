/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:13:02 by mmoramov          #+#    #+#             */
/*   Updated: 2024/07/11 18:07:18 by mmoramov         ###   ########.fr       */
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
		processInput(input[i], vec);
		i++;
	}

	printVector(vec);
	firstSortVector(vec, 0, vec.size()-1);
	//firstSortVector(vec, 0, 5);
	//firstSortVector(vec, 6, 10);
	printVector(vec);
}

void PmergeMe::mergeVector(std::vector<int> &vec, int start,int middle, int end) {

	std::cout << "MERGING START" << std::endl;
	printVector(vec);

	int n1 = middle - start + 1;
	int n2 = end - middle;
	std::vector<int> vecL(n1);
	std::vector<int> vecR(n2);

	for (int i = 0; i < n1; i++)
		left[i] = arr

	for (int i = 0; i < n2; i++)

	int RI = 0;
	int LI = 0;
	for (int i = 0; i < end - start + 1; i++)
	{
		if (RI == n2)
		{
			vec[i] = vecL[LI];
			LI++;
		}
		else if (LI == n1)
		{
			vec[i] = vecR[RI];
			RI++;
		}
		else if (vecR[RI] > vecL[LI])
		{
			vec[i] = vecL[LI];
			LI++;
		}
		else
		{
			vec[i] = vecR[RI];
			RI++;
		}
	}


	std::cout << "MERGING END" << std::endl;
	printVector(vec);

}

void PmergeMe::firstSortVector(std::vector<int> &vec, int start, int end) {

	std::cout << "before" << std::endl;
	printVector(vec);

	if (end - start > 1)
	{
		int middle = (start + end) / 2;

		std::cout << "start is" << start << std::endl;
		std::cout << "middle is" << middle << std::endl;
		std::cout << "end is" << end << std::endl;

		firstSortVector(vec, start, middle);
		firstSortVector(vec, middle+1, end);
		mergeVector(vec, start, middle, end);
	}
	else if (vec[end] < vec[start])
	{
		std::cout << "lets swap" << vec[start] << " and " << vec[end] << std::endl;
		std::swap(vec[start], vec[end]);
	}
	else
		std::cout << "not swapping" << vec[start] << " and " << vec[end] << std::endl;
	std::cout << "after" << std::endl;
	printVector(vec);

}

void PmergeMe::printVector(std::vector<int> vec) {

	std::cout << "vector " << std::endl;

	int vecLength = vec.size();
	for (int i = 0; i < vecLength; i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout  << std::endl;
}

void PmergeMe::processInput(char *input, std::vector<int> &vec) {

	int i = 0;

	while (input && input[i])
	{
		if (!std::isdigit(input[i]))
			throw std::logic_error("checkInput: Input can contain only numbers");
		i++;
	}

	//todo int max
	int nbr = std::atoi(input);
	int vecLength = vec.size();

	for (int i = 0; i < vecLength; i++)
	{
		if (vec[i] == nbr)
			throw std::logic_error("checkInput: Input cant contain duplicates");
	}
	vec.push_back(nbr);
}



PmergeMe::~PmergeMe(void) {}

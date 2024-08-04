/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:13:02 by mmoramov          #+#    #+#             */
/*   Updated: 2024/08/04 19:16:04 by mmoramov         ###   ########.fr       */
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
	std::vector<int> firstVector;
	std::vector<int> secondVector;
	std::vector<std::pair<int, int> > pairs;
	
	while (input && input[i])
		processInput(input[i++], vec);

	fordJohnsonSort(vec);

	std::cout << "END" << std::endl;
	printVector(vec);
}

void PmergeMe::fordJohnsonSort(std::vector<int> &vec) {

	if (vec.size() <= 1)
		return;
	std::vector<int> firstVector;
	std::vector<int> secondVector;
	std::vector<std::pair<int, int> > pairs;
		
	createSortedPairs(vec, pairs);
	splitPairs(pairs, firstVector, secondVector);
	fordJohnsonSort(secondVector);
	vec.clear();
	mergeVector(firstVector, secondVector, vec);
}


void PmergeMe::mergeVector(std::vector<int> &firstVec,std::vector<int> &secondVec, std::vector<int> &vec)
{
	int firstVecLength = firstVec.size();
	int secondVecLength = secondVec.size();
	int i = 0, j = 0;
	while (i < firstVecLength && j < secondVecLength)
	{
		if (firstVec[i] < secondVec[j])
		{
			vec.push_back(firstVec[i]);
			i++;
		}
		else 
		{
			vec.push_back(secondVec[j]);
			j++;
		}
	}
	while (i < firstVecLength)
	{
		vec.push_back(firstVec[i]);
		i++;
	}
	while (j < secondVecLength)
	{
		vec.push_back(secondVec[j]);
		j++;
	}
}

void PmergeMe::printVector(std::vector<int> vec) {

	int vecLength = vec.size();
	for (int i = 0; i < vecLength; i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout  << std::endl;
}

void PmergeMe::printPairs(std::vector<std::pair<int,int> > pairs) {

	int vecLength = pairs.size();
	for (int i = 0; i < vecLength; i++)
	{
		std::cout << pairs[i].first << ", " << pairs[i].second << " " << std::endl;
	}
	std::cout  << std::endl;
}

void PmergeMe::processInput(char *input, std::vector<int> &vec) {

	int i = 0;
	while (input && input[i])
	{
		if (!std::isdigit(input[i]))
			throw std::logic_error("checkInput: Input can contain only numbers"); //todo
		i++;
	}

	long Value;
	std::string posString = input;
	std::istringstream iss(posString);
	if (!(iss >> Value) || (Value < INT_MIN || Value > INT_MAX))
	{
		std::cerr << "Conversion failed for string: " << input << std::endl;
		return;
	}

	int nbr =  static_cast<int>(Value);
	int vecLength = vec.size();

	for (int i = 0; i < vecLength; i++)
	{
		if (vec[i] == nbr)
			throw std::logic_error("checkInput: Input cant contain duplicates");
	}
	vec.push_back(nbr);
}

void PmergeMe::createSortedPairs (std::vector<int> &vec, std::vector<std::pair<int, int> > &pairs)
{
	
	int vecLength = vec.size();
	for (int i = 0; i < vecLength; i+=2)
	{
		if (i + 1 < vecLength)
			if (vec[i] < vec[i+1])
				pairs.push_back(std::make_pair(vec[i], vec[i+1]));
			else
				pairs.push_back(std::make_pair(vec[i+1], vec[i]));
		else
			pairs.push_back(std::make_pair(vec[i], -1));
	}
	std::sort(pairs.begin(), pairs.end());
}

void PmergeMe::splitPairs(std::vector<std::pair<int,int> > &pairs,std::vector<int> &firstVec,std::vector<int> &secondVec)
{
	int vecLength = pairs.size();
	for (int i = 0; i < vecLength; i++)
	{
		firstVec.push_back(pairs[i].first);
		if (pairs[i].second != -1)
			secondVec.push_back(pairs[i].second);
	}
}

PmergeMe::~PmergeMe(void) {}

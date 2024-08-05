/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:13:02 by mmoramov          #+#    #+#             */
/*   Updated: 2024/08/05 19:34:19 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
	(void) copy; 
	*this = copy;
	return;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &base)
{
	(void) base;
	return *this;
}

void PmergeMe::sort(char **input)
{
	try
	{
		_sortByVector(input);
		_sortByDeque(input);
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

void PmergeMe::_sortByVector(char **input)
{
	int i = 1;
	std::vector<int> vec;
	
	while (input && input[i])
		_saveInput(input[i++], vec);

	std::cout << "std::vector: " << std::endl << "Before: " << std::endl;
 	_print(vec);
	
	std::clock_t start = std::clock();
	_fordJohnsonSort (vec);
	std::clock_t end = std::clock();
	
	std::cout << "After" << std::endl;
 	_print(vec);

	double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;
	std::cout << "Time to process a range of " << vec.size() << " elements: " << elapsed_time << " microseconds" << std::endl << std::endl;
}

void PmergeMe::_sortByDeque(char **input)
{
	int i = 1;
	std::deque<int> deq;
	
	while (input && input[i])
		_saveInput(input[i++], deq);
	
	std::cout << "std::deque: " << std::endl << "Before: " << std::endl;
 	_print(deq);
	
	std::clock_t start = std::clock();
	_fordJohnsonSort (deq);
	std::clock_t end = std::clock();

	std::cout << "After" << std::endl;
	_print(deq);
   
	double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;
	std::cout << "Time to process a range of " << deq.size() << " elements: " << elapsed_time << " microseconds" << std::endl << std::endl;
}

void PmergeMe::_fordJohnsonSort (std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return;
	std::vector<int> firstVector;
	std::vector<int> secondVector;
	std::vector<std::pair<int, int> > pairs;
		
	_createSortedPairs(vec, pairs);
	_splitPairs(pairs, firstVector, secondVector);
	_fordJohnsonSort(secondVector);
	vec.clear();
	_mergeSort(firstVector, secondVector, vec);
}

void PmergeMe::_fordJohnsonSort (std::deque<int> &deq)
{
	if (deq.size() <= 1)
		return;
	std::deque<int> firstDeque;
	std::deque<int> secondDeque;
	std::deque<std::pair<int, int> > pairs;
		
	_createSortedPairs(deq, pairs);
	_splitPairs(pairs, firstDeque, secondDeque);
	_fordJohnsonSort(secondDeque);
	deq.clear();
	_mergeSort(firstDeque, secondDeque, deq);
}

void PmergeMe::_createSortedPairs (std::vector<int> &vec, std::vector<std::pair<int, int> > &pairs)
{
	
	int vecLength = vec.size();
	for (int i = 0; i < vecLength; i += 2)
	{
		if (i + 1 < vecLength)
			if (vec[i] < vec[i + 1])
				pairs.push_back(std::make_pair(vec[i], vec[i + 1]));
			else
				pairs.push_back(std::make_pair(vec[i + 1], vec[i]));
		else
			pairs.push_back(std::make_pair(vec[i], -1));
	}
	std::sort(pairs.begin(), pairs.end());
}

void PmergeMe::_createSortedPairs (std::deque<int> &deq, std::deque<std::pair<int, int> > &pairs)
{
	
	int deqLength = deq.size();
	for (int i = 0; i < deqLength; i += 2)
	{
		if (i + 1 < deqLength)
			if (deq[i] < deq[i + 1])
				pairs.push_back(std::make_pair(deq[i], deq[i + 1]));
			else
				pairs.push_back(std::make_pair(deq[i + 1], deq[i]));
		else
			pairs.push_back(std::make_pair(deq[i], -1));
	}
	std::sort(pairs.begin(), pairs.end());
}

void PmergeMe::_splitPairs(std::vector<std::pair<int,int> > &pairs,std::vector<int> &firstVec,std::vector<int> &secondVec)
{
	int vecLength = pairs.size();
	for (int i = 0; i < vecLength; i++)
	{
		firstVec.push_back(pairs[i].first);
		if (pairs[i].second != -1)
			secondVec.push_back(pairs[i].second);
	}
}

void PmergeMe::_splitPairs(std::deque<std::pair<int,int> > &pairs,std::deque<int> &firstDeq,std::deque<int> &secondDeq)
{
	int deqLength = pairs.size();
	for (int i = 0; i < deqLength; i++)
	{
		firstDeq.push_back(pairs[i].first);
		if (pairs[i].second != -1)
			secondDeq.push_back(pairs[i].second);
	}
}

void PmergeMe::_mergeSort(std::vector<int> &firstVec,std::vector<int> &secondVec, std::vector<int> &vec)
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
	for (; i < firstVecLength; i++)
		vec.push_back(firstVec[i]);
	for (; j < secondVecLength; j++)
		vec.push_back(secondVec[j]);
}

void PmergeMe::_mergeSort(std::deque<int> &firstDeq,std::deque<int> &secondDeq, std::deque<int> &deq)
{
	int firstDeqLength = firstDeq.size();
	int secondDeqLength = secondDeq.size();
	int i = 0, j = 0;
	while (i < firstDeqLength && j < secondDeqLength)
	{
		if (firstDeq[i] < secondDeq[j])
		{
			deq.push_back(firstDeq[i]);
			i++;
		}
		else 
		{
			deq.push_back(secondDeq[j]);
			j++;
		}
	}
	for (; i < firstDeqLength; i++)
		deq.push_back(firstDeq[i]);
	for (; j < secondDeqLength; j++)
		deq.push_back(secondDeq[j]);
}

void PmergeMe::_saveInput(char *input, std::vector<int> &vec) {

	int i = 0;
	while (input && input[i])
	{
		if (!std::isdigit(input[i]))
			throw std::logic_error("Input can contain only positive numbers");
		i++;
	}

	long Value;
	std::string posString = input;
	std::istringstream iss(posString);
	if (!(iss >> Value) || (Value < INT_MIN || Value > INT_MAX))
		throw std::logic_error("Conversion failed");

	int nbr = static_cast<int>(Value);
	int vecLength = vec.size();

	for (int i = 0; i < vecLength; i++)
	{
		if (vec[i] == nbr)
			throw std::logic_error("Input can't contain duplicates");
	}
	vec.push_back(nbr);
}

void PmergeMe::_saveInput(char *input, std::deque<int> &deq) {

	int i = 0;
	while (input && input[i])
	{
		if (!std::isdigit(input[i]))
			throw std::logic_error("Input can contain only positive numbers");
		i++;
	}

	long Value;
	std::string posString = input;
	std::istringstream iss(posString);
	if (!(iss >> Value) || (Value < INT_MIN || Value > INT_MAX))
		throw std::logic_error("Conversion failed");

	int nbr = static_cast<int>(Value);
	int deqLength = deq.size();

	for (int i = 0; i < deqLength; i++)
	{
		if (deq[i] == nbr)
			throw std::logic_error("Input can't contain duplicates");
	}
	deq.push_back(nbr);
}

void PmergeMe::_print(std::vector<int> vec) {

	int vecLength = vec.size();
	for (int i = 0; i < vecLength; i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout  << std::endl;
}

void PmergeMe::_print(std::deque<int> deq) {

	int deqLength = deq.size();
	for (int i = 0; i < deqLength; i++)
	{
		std::cout << deq[i] << " ";
	}
	std::cout  << std::endl;
}

PmergeMe::~PmergeMe(void) {}

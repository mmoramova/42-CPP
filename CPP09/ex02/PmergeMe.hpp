/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:13:11 by mmoramov          #+#    #+#             */
/*   Updated: 2024/08/05 18:40:44 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_H
# define PmergeMe_H

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <fstream>
#include <sstream>
#include <exception>
#include <utility>
#include <algorithm>
#include <vector>
#include <deque>
#include <ctime> 

class PmergeMe {

public:
	PmergeMe(void);
	~PmergeMe(void);
	void sort(char **input);
	
private:
	PmergeMe(PmergeMe const &copy);
	PmergeMe &operator=(PmergeMe const &base);
	
	/*vector*/
	void _saveInput(char *input, std::vector<int> &vec);
	void _sortByVector(char **input);
	void _fordJohnsonSort(std::vector<int> &vec); 
	void _createSortedPairs (std::vector<int> &vec, std::vector<std::pair<int, int> > &pairs);
	void _splitPairs(std::vector<std::pair<int,int> > &pairs,std::vector<int> &firstVec,std::vector<int> &secondVec);
	void _mergeSort (std::vector<int> &firstVec,std::vector<int> &secondVec, std::vector<int> &vec);
	void _print (std::vector<int> vec);
	void _printPairs(std::vector<std::pair<int,int> > pairs);

	/*deque*/
	void _saveInput(char *input, std::deque<int> &deq);
	void _sortByDeque(char **input);
	void _fordJohnsonSort(std::deque<int> &deq); 
	void _createSortedPairs (std::deque<int> &deq, std::deque<std::pair<int, int> > &pairs);
	void _splitPairs(std::deque<std::pair<int,int> > &pairs,std::deque<int> &firstVec,std::deque<int> &secondVec);
	void _mergeSort (std::deque<int> &firstVec,std::deque<int> &secondVec, std::deque<int> &deq);
	void _print (std::deque<int> deq);
	void _printPairs(std::deque<std::pair<int,int> > pairs);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:13:11 by mmoramov          #+#    #+#             */
/*   Updated: 2024/08/04 19:13:57 by mmoramov         ###   ########.fr       */
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
//#include <stack>
#include <utility>
#include <algorithm>

class PmergeMe {

public:

	static void sort(char **input);
	
	static void mergeVector (std::vector<int> &firstVec,std::vector<int> &secondVec, std::vector<int> &vec);

	static void printVector (std::vector<int> vec);

	static void printPairs(std::vector<std::pair<int,int> > pairs);

	static void splitPairs(std::vector<std::pair<int,int> > &pairs,std::vector<int> &firstVec,std::vector<int> &secondVec);

	static void createSortedPairs (std::vector<int> &vec, std::vector<std::pair<int, int> > &pairs);
	static void fordJohnsonSort(std::vector<int> &vec); 

private:
	PmergeMe(void);
	PmergeMe(PmergeMe const &copy);
	PmergeMe &operator=(PmergeMe const &base);
	~PmergeMe(void);

	static void processInput(char *inputString, std::vector<int> &vec);
};

#endif

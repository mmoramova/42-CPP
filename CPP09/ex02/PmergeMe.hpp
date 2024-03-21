/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:13:11 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/21 17:28:30 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_H
# define PmergeMe_H

#include <iomanip>
#include <iostream>
#include <string>
//#include <stack>

class PmergeMe {

public:

	static void sort(char **input);
	static void firstSortVector (std::vector<int> &vec, int start, int end);
	static void mergeVector (std::vector<int> &vec, int start, int middle, int end);

	static void printVector (std::vector<int> vec);

private:
	PmergeMe(void);
	PmergeMe(PmergeMe const &copy);
	PmergeMe &operator=(PmergeMe const &base);
	~PmergeMe(void);

	static void processInput(char *inputString, std::vector<int> &vec);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:13:02 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/17 16:00:24 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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

void PmergeMe::sort(std::string input) {


	std::cout << "end " << input << std::endl;
}


PmergeMe::~PmergeMe(void) {}

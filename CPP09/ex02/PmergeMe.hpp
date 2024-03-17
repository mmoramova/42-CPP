/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:13:11 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/17 15:14:38 by mmoramov         ###   ########.fr       */
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

	static void sort(std::string input);

private:
	PmergeMe(void);
	PmergeMe(PmergeMe const &copy);
	PmergeMe &operator=(PmergeMe const &base);
	~PmergeMe(void);

	//static int checkInput(std::string inputString);
};

#endif

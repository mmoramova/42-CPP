/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:46:39 by mmoramov          #+#    #+#             */
/*   Updated: 2024/08/05 19:39:11 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

#include <iomanip>
#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

class RPN {

public:

	static void compute(std::string input);

private:
	RPN(void);
	RPN(RPN const &copy);
	RPN &operator=(RPN const &base);
	~RPN(void);

	static int checkInput(std::string inputString);
};

#endif


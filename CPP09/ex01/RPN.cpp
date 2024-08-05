/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:46:33 by mmoramov          #+#    #+#             */
/*   Updated: 2024/08/05 19:38:41 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(RPN const &copy) {
	(void) copy;
	*this = copy;
	return;
}

RPN &RPN::operator=(RPN const &base) {
	(void) base;
	return *this;
}

void RPN::compute(std::string input) {

	std::stack<int> st;
	int nbr;
	int strlen = input.length();

	if (checkInput(input) == 1)
	{
		std::cout << "Error" << std::endl;
		return;
	}
	for (int i = 0; i < strlen; i+=2)
	{
		nbr = 0;
		if (input[i] == ' ')
			continue;
		else if (std::isdigit(input[i]))
			st.push(atoi(&input[i]));
		else
		{
			nbr = st.top();
			st.pop();

			switch(input[i]) {
			case '+':
				nbr += st.top();
				break;
			case '-':
				nbr = st.top() - nbr;
				break;
			case '*':
				nbr *= st.top();
				break;
			case '/':
				nbr = st.top() / nbr;
				break;
			default:
				std::cout << "Error" << std::endl;
			}
			st.pop();
			st.push(nbr);
		}
	}
	std::cout << st.top() << std::endl;
}

int RPN::checkInput(std::string input) {

	std::stack<int> st;
	int nbr = 0;
	int strlen = input.length();

	for (int i = 0; i < strlen; i++)
	{
		if (std::isdigit(input[i]))
			nbr++;
		else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
		{
			if (nbr < 2)
				return 1;
			nbr -= 1;
		}
		if (input[i+1] && input[++i] != ' ')
				return 1;
	}
	if (nbr != 1)
		return 1;
	return 0;
}

RPN::~RPN(void) {}

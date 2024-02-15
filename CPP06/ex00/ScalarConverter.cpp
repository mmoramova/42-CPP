/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:55:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/15 19:05:54 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
	std::cout << "ScalarConverter default constructor called" << std::endl;
	return;
}

ScalarConverter::ScalarConverter(std::string inputString) : _inputString(inputString) {
	std::cout << "ScalarConverter constructor called" << std::endl;
	return;
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy) : _inputString(copy._inputString) {
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	return;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &base) {
	if (this != &base)
	{
		this->_inputString = base._inputString;
	}
	std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter(void) {
	std::cout << "ScalarConverter destructor called" << std::endl;
	return;
}

std::ostream& operator<<(std::ostream& out, const ScalarConverter& base) {
	out << "\033[0;95m" << std::endl;
	out << "char: " << base._inputString << std::endl;
	out << "int: " << std::endl;
	out << "float: " << std::endl;
	out << "double: " << std::endl;
	out << "\033[0;39m";
	return out;
}

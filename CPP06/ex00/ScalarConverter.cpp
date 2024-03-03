/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:55:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/03 20:37:51 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
	std::cout << "ScalarConverter default constructor called" << std::endl;
	return;
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy) {

	(void) copy;
	*this = copy;
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	return;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &base) {

	(void) base;
	std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	return *this;
}

void ScalarConverter::convert(std::string inputString) {

	if (inputString.empty())
		std::cerr << "Conversion failed for empty string" << std::endl;
	else if (isChar(inputString))
		convertChar(inputString);
	else if (isSpecial(inputString))
		convertSpecial(inputString);
	else if (isInt(inputString))
		convertInt(inputString);
	else if (isFloat(inputString))
		convertFloat(inputString);
	else if (isDouble(inputString))
		convertDouble(inputString);
	else
		std::cerr << "Error: conversion failed for string " << inputString << std::endl;
}

bool ScalarConverter::isChar(std::string inputString) {

	if (inputString.length() == 1 && !std::isdigit(inputString[0]) && std::isprint(inputString[0]))
		return 1;
	return 0;
}

bool ScalarConverter::isInt(std::string inputString) {

	int strlen = inputString.length();

	for (int i = 0; i < strlen; i++)
	{
		if (i == 0 && (inputString[0] == '+' || inputString[0] == '-'))
			continue;
		else if (i > 0 && !std::isdigit(inputString[i]))
			return 0;
	}
	return 1;
}

bool ScalarConverter::isFloat(std::string inputString) {

	if (inputString[inputString.length() -1] != 'f')
		return 0;
	inputString.pop_back();
	if (isDouble(inputString))
		return 1;
	return 0;
}

bool ScalarConverter::isDouble(std::string inputString) {

	int dots = 0;
	int strlen = inputString.length();

	for (int i = 0; i < strlen; i++)
	{
		if (i == 0 && (inputString[i] == '+' || inputString[i] == '-'))
			continue;
		else if (inputString[i] == '.')
			dots++;
		else if (!std::isdigit(inputString[i]))
			return 0;
	}
	if (dots != 1)
		return 0;
	return 1;
}

bool ScalarConverter::isSpecial(std::string inputString) {

	if (!inputString.compare("-inff")|| !inputString.compare("+inff") || !inputString.compare("nanf"))
		inputString.pop_back();
	if (!inputString.compare("-inf")|| !inputString.compare("+inf") || !inputString.compare("nan"))
		return 1;
	return 0;
}

void ScalarConverter::convertInt(std::string inputString) {

		int sign = 1;
		long Value;
		std::string posString = inputString;

		if (inputString[0] == '-')
		{
			sign = -1;
			posString.erase(posString.begin());
		}
		std::istringstream iss(posString);
		if (!(iss >> Value) || (Value * sign < INT_MIN || Value * sign > INT_MAX))
		{
			std::cerr << "Conversion failed for string: " << inputString << std::endl;
			return;
		}
		Value *= sign;
		std::cout << "\033[0;95m";
		std::cout << "char: " ;
		if (Value >= 0 && Value <= 127)
			std::cout << ((Value >= 32 && Value <= 126) ? std::to_string(static_cast<char>(Value)) : "non displayable") << std::endl;
		else
			std::cout << "impossible" << std::endl;
		std::cout << "int: " << Value << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(Value) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(Value) << std::endl;
		std::cout << std::defaultfloat << std::setprecision(2) << "\033[0;39m";
}

void ScalarConverter::convertFloat(std::string inputString) {

		float Value;
		int sign = 1;
		std::string posString = inputString;
		posString.pop_back();

		if (inputString[0] == '-')
		{
			sign = -1;
			posString.erase(posString.begin());
		}
		std::istringstream iss(posString);
		if (!(iss >> Value) || (Value > FLT_MAX))
		{
			std::cerr << "Conversion float failed for string: " << inputString << std::endl;
			return;
		}
		int precision = posString.size() - posString.find('.') - 1;
		Value *= sign;
		std::cout << "\033[0;95m";
		std::cout << "char: " ;
		if (Value >= 0 && Value <= 127)
			std::cout << ((Value >= 32 && Value <= 126) ? std::to_string(static_cast<char>(Value)) : "non displayable") << std::endl;
		else
			std::cout << "impossible" << std::endl;
		std::cout << "int: " << ((Value >= INT_MIN && Value <= INT_MAX) ? std::to_string(static_cast<int>(Value)) : "impossible") << std::endl;
		std::cout << std::fixed << std::setprecision(precision) << "float: " << Value << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(Value) << std::endl;
		std::cout << std::defaultfloat << std::setprecision(2) << "\033[0;39m";
}

void ScalarConverter::convertDouble(std::string inputString) {

		double Value;
		int sign = 1;
		std::string posString = inputString;

		if (inputString[0] == '-')
		{
			sign = -1;
			posString.erase(posString.begin());
		}
		std::istringstream iss(posString);
		if (!(iss >> Value) || (Value > DBL_MAX))
		{
			std::cerr << "Conversion failed for string:  " << inputString << std::endl;
			return;
		}
		int precision = posString.size() - posString.find('.') - 1;
		Value *= sign;
		float fvalue = static_cast<float>(Value);

		std::cout << "\033[0;95m";
		std::cout << "char: " ;
		if (Value >= 0 && Value <= 127)
			std::cout << ((Value >= 32 && Value <= 126) ? std::to_string(static_cast<char>(Value)) : "non displayable") << std::endl;
		else
			std::cout << "impossible" << std::endl;
		std::cout << "int: " << ((Value >= INT_MIN && Value <= INT_MAX) ? std::to_string(static_cast<int>(Value)) : "impossible") << std::endl;
		std::cout << std::fixed << std::setprecision(precision) << "float: " ;
		if (std::abs(Value) <= FLT_MAX)
			std::cout << fvalue << "f" << std::endl;
		else
			std::cout << "impossible" << std::endl;
		std::cout << "double: " << Value << std::endl;
		std::cout << std::defaultfloat << std::setprecision(2) << "\033[0;39m";
}


void ScalarConverter::convertChar(std::string inputString) {

		char Value = inputString[0];

		std::cout << "\033[0;95m";
		std::cout << "char: " << ((Value >= 32 && Value <= 126) ? std::to_string(Value) : "non displayable") << std::endl;
		std::cout << "int: " << static_cast<int>(Value) << std::endl;
		std::cout << std::fixed << "float: " << static_cast<float>(Value) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(Value) << std::endl;
		std::cout << std::defaultfloat  << "\033[0;39m";
}

void ScalarConverter::convertSpecial(std::string inputString) {

		if (!inputString.compare("-inff")|| !inputString.compare("+inff") || !inputString.compare("nanf"))
			inputString.pop_back();
		std::cout << "\033[0;95m";
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << inputString << "f" << std::endl;
		std::cout << "double: " << inputString << std::endl;
		std::cout << "\033[0;39m";
}

ScalarConverter::~ScalarConverter(void) {
	std::cout << "ScalarConverter destructor called" << std::endl;
	return;
}

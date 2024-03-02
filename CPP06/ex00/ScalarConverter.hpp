/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:55:18 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/02 19:09:07 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_H
# define ScalarConverter_H

#include <iomanip>
#include <iostream>
#include <limits>
#include <cfloat>
#include <sstream>
#include <exception>
#include <fstream>
#include <string>
#include <stdlib.h>

class ScalarConverter {

public:

	static void convert(std::string inputString);

private:
	ScalarConverter(void);
	ScalarConverter(ScalarConverter const &copy);
	ScalarConverter &operator=(ScalarConverter const &base);
	~ScalarConverter(void);

	static bool isChar(std::string inputString);
	static bool isSpecial(std::string inputString);
	static bool isInt(std::string inputString);
	static bool isFloat(std::string inputString);
	static bool isDouble(std::string inputString);
	static void convertChar(std::string inputString);
	static void convertSpecial(std::string inputString);
	static void convertInt(std::string inputString);
	static void convertFloat(std::string inputString);
	static void convertDouble(std::string inputString);
};

#endif

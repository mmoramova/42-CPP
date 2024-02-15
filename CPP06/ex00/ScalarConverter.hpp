/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:55:18 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/15 19:06:40 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ScalarConverter_H
# define ScalarConverter_H

#include <iomanip>
#include <iostream>
#include <exception>
#include <fstream>
#include <string>

class ScalarConverter {

public:
	ScalarConverter(void);
	ScalarConverter(std::string target);
	ScalarConverter(ScalarConverter const &copy);
	ScalarConverter &operator=(ScalarConverter const &base);
	~ScalarConverter(void);

	std::string		_inputString;

private:
	//std::string		_inputString;
	//std::string		_char;
	//int				_int;
	//float			_float;
	//double			_double;
};

std::ostream& operator<<(std::ostream& out, const ScalarConverter& base);

#endif

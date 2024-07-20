/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:11:33 by mmoramov          #+#    #+#             */
/*   Updated: 2024/07/20 19:03:49 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) {
	(void) copy;
	*this = copy;
	return;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &base) {
	(void) base;
	return *this;
}

BitcoinExchange::~BitcoinExchange(void) {}

double BitcoinExchange::convertDouble(std::string input) {

	int dots = 0;
	int strlen = input.length();

	for (int i = 0; i < strlen; i++)
	{
		if (input[i] != 0 && input[i] == '.')
			dots++;
		else if (!std::isdigit(input[i]))
			return -1.0; //error not double
	}
	if (dots > 1)
		return -1.0; //error not double
	
	long double Value;

	std::istringstream iss(input);
	if (!(iss >> Value) || (Value > DBL_MAX))
	{
		std::cerr << "Conversion double failed for string: " << input << std::endl;
		return -1.0;
	}
	Value = static_cast<double>(Value);
	return Value;
}

void BitcoinExchange::saveDatabase(){
	
	std::string fileName = "data.csv";
	std::string line;
	std::ifstream infile (fileName.c_str());
	std::string date;
	std::string rate;
	double d_rate;

	if (!infile.is_open())
	{
		std::cerr << "Failed to open data.csv" << std::endl;
		return;
	}
	if (std::getline(infile, line) && line != "date,exchange_rate")
	{
		std::cerr << "Incorrect first line in data.csv" << std::endl;
		return;
	}	
		
	while (std::getline(infile, date, ',') && std::getline(infile, rate))
	{
		std::cout << date << "|" << rate << std::endl;
		d_rate = convertDouble(rate);			
		if (d_rate == -1.0)
		{
			std::cerr << "Failed to open data.csv" << std::endl;
			return;
		}
		_database[date] = d_rate;
	}

	std::map<std::string, double>::iterator it;
    for (it = _database.begin(); it != _database.end(); ++it) {
        std::cout << "Date: " << it->first << ", Value: " << std::setprecision(10) << it->second << std::endl;
    }
}

void BitcoinExchange::readInfile(std::string input){
	
	std::string fileName = input;
	std::string line;
	std::ifstream infile (fileName.c_str());
	std::string date;
	std::string rate;
	std::string value;
	double d_rate = 0.0;
	double d_value = 0.0;

	if (!infile.is_open())
	{
		std::cerr << "Failed to open " << input << std::endl;
		return;
	}
	if (std::getline(infile, line) && line != "date | value")
	{
		std::cerr << "Incorrect first line in " << input << std::endl;
		return;
	}	
		
	while (std::getline(infile, date, ',') && std::getline(infile, rate))
	{
		std::cout << date << "|" << rate << std::endl;
		d_rate = convertDouble(rate);			
		if (d_rate == -1.0)
		{
			std::cerr << "Failed to open " << input << std::endl;
			return;
		}
		std::cout << date << " => " << value << " = " << d_value*d_rate << std::endl;
		
	}
}

void BitcoinExchange::read(std::string input)
{   
	saveDatabase();
	readInfile(input);
}

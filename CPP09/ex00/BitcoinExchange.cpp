/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:11:33 by mmoramov          #+#    #+#             */
/*   Updated: 2024/07/29 18:14:00 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	(void) copy;
	*this = copy;
	return;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &base)
{
	(void) base;
	return *this;
}

BitcoinExchange::~BitcoinExchange(void) {}

double BitcoinExchange::_convertDouble(std::string input)
{

	int dots = 0;
	long double Value;
	int strlen = input.length();

	for (int i = 0; i < strlen; i++)
	{
		if (input[i] != 0 && input[i] == '.')
			dots++;
		else if (!std::isdigit(input[i]))
			throw std::logic_error("Value contains something else then digits");
	}
	if (dots > 1)
		throw std::logic_error("Value contains something else then digits");
	std::istringstream iss(input);
	if (!(iss >> Value) || (Value > DBL_MAX))
		throw std::logic_error("Incorrect value");
	return (static_cast<double>(Value));
}

void BitcoinExchange::_checkDate(std::string date)
{
	int year, month, day;
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	std::istringstream  s_year(date.substr(0,4));
	std::istringstream  s_month(date.substr(5,2));
	std::istringstream  s_day(date.substr(8,2));
	
	if (date[4] != '-' || date[7] != '-' || !(s_year >> year) || !(s_month >> month) || !(s_day >> day))
		throw std::logic_error("Incorrect date");
	if (date < _database.begin()->first)
		throw std::out_of_range("Date out of range");
	if (year < 1995 || year > 2099)
		throw std::out_of_range("Year out of range");
	if (month < 1 || month > 12)
		throw std::out_of_range("Month out of range");
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		daysInMonth[1] = 29;
	if (day < 1 || day > daysInMonth[month-1])		
		throw std::out_of_range("Day out of range");
}

void BitcoinExchange::_saveDatabase()
{
	
	std::string fileName = "data.csv";
	std::ifstream infile (fileName.c_str());
	std::string line;
	std::string date;
	std::string rate;

	if (!infile.is_open())
		throw std::invalid_argument("Failed to open data.csv");
	if (std::getline(infile, line) && line != "date,exchange_rate")
		throw std::invalid_argument("Incorrect first line in data.csv");
		
	while (std::getline(infile, date, ',') && std::getline(infile, rate))
	{
		try
		{
			_database[date] = _convertDouble(rate);
		}
		catch (std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
}

void BitcoinExchange::_readInfile(std::string input)
{	
	std::ifstream infile (input.c_str());
	std::string line;
	std::string date;
	double d_value = 0.0;

	if (!infile.is_open())	
		throw std::invalid_argument("Failed to open file");
	if (std::getline(infile, line) && line != "date | value")
		throw std::invalid_argument("Incorrect syntax in the first line");
	while (std::getline(infile, line))
	{
		try
		{
			size_t pipe_pos = line.find(" | ");
			if (pipe_pos != 10 || pipe_pos == std::string::npos)
			{
				throw std::invalid_argument("Incorrect syntax");
			}	
			date = line.substr(0, pipe_pos);
			_checkDate(date);
			
			d_value = _convertDouble(line.substr(pipe_pos + 3));			
			if (d_value < 0 || d_value > 1000)
				throw std::out_of_range("Value out of range");
			std::map<std::string,double>::iterator it=_database.lower_bound(date); 
			if (date != it->first || it == _database.end())
				it--;		
			std::cout << std::setprecision(10) << date << " => " << d_value << " = " << d_value * it->second << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
}

void BitcoinExchange::calculate(std::string input)
{   
	try
	{
		_saveDatabase();
		_readInfile(input);
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

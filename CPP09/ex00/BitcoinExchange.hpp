/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:11:30 by mmoramov          #+#    #+#             */
/*   Updated: 2024/07/20 19:02:46 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BSH_H
# define BSH_H

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <cfloat>
#include <sstream>
#include <map>
#include <cctype> 

class BitcoinExchange {

public:

	 BitcoinExchange(void); //mrknut ci ma byt private
	 ~BitcoinExchange(void); //tu tiez
	 void read(std::string input);
	 void saveDatabase();
	 void readInfile(std::string input);
	 double convertDouble(std::string input);
    //static void compute(std::string input);

private:
	
	BitcoinExchange(BitcoinExchange const &copy);
	BitcoinExchange &operator=(BitcoinExchange const &base);
	

	 int checkInput(std::string inputString);
	std::map<std::string, double> _database;
};

#endif


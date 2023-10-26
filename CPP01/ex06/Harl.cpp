/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:28:49 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/26 20:04:10 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	std::cout << "Harl created" << std::endl;
	return;
}

Harl::~Harl( void ) {
	std::cout << "Harl died"<< std::endl;
	return;
}

void Harl::complain( std::string level ) {
	std::string lstLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4 && level.compare(lstLevels[i]))
		i++;

	switch(i) {
	case 0:
		Harl::debug();
	case 1:
		Harl::info();
	case 2:
		Harl::warning();
	case 3:
		Harl::error();
		break;
	default:
		Harl::invalidInput();
	}

}

void Harl::debug( void ) {
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now."<< std::endl;
}

void Harl::invalidInput( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]"<< std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:57:30 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/26 19:24:51 by mmoramov         ###   ########.fr       */
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
	void (Harl::*lstFuntions[5])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::invalidInput};
	std::string lstLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4 && level.compare(lstLevels[i]))
		i++;
	(this->*lstFuntions[i])();
}

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void Harl::invalidInput( void ) {
	std::cout << "Invalid input"<< std::endl;
}

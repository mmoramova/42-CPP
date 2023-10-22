/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:25:00 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/22 16:50:54 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <iomanip>

class Contact {

public:

	std::string	getFirstName( void );
	std::string	getLastName( void );
	std::string	getNickname( void );
	std::string	getPhoneNumber( void );
	std::string	getDarkestSecret( void );

	Contact( void );
	~Contact ( void );

	void	addContact( void );
	void	showContact( void );
	void	showContactHeader( int index );
	bool	isEmpty( void );

	bool	error;

private:

	std::string _getContactData( std::string name );
	bool 		_containsOnlyDigits(std::string str);
	void 		_showContactHeaderColumn( std::string string );

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
	bool		_contactIsEmpty;

};

#endif

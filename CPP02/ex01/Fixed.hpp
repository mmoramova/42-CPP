/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:18:00 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/28 13:30:09 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
# define Fixed_H

#include <iostream>
#include <iomanip>

class Fixed {

public:

	Fixed( void );
	Fixed( int const intNbr );
	Fixed( float const floatNbr );
	Fixed( const Fixed& base );
	Fixed& operator=(const Fixed& base);
	~Fixed( void );

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );
	float 		toFloat( void ) const;
	int 		toInt( void ) const;

private:

	int				 fixedPointNbr;
	static const int fractionalBits = 8;

};

std::ostream& operator<<(std::ostream& out, const Fixed& base);

#endif

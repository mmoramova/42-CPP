/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:39:33 by mmoramov          #+#    #+#             */
/*   Updated: 2023/10/28 13:12:15 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
# define Fixed_H

#include <iostream>
#include <iomanip>

class Fixed {

public:

	Fixed( void );
	Fixed( const Fixed& base );
	Fixed& operator=(const Fixed& base);
	~Fixed( void );

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

private:

	int				 fixedPointNbr;
	static const int fractionalBits = 8;

};

#endif

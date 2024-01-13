/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:04:36 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/13 16:56:17 by mmoramov         ###   ########.fr       */
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

	bool operator>(const Fixed& base) const;
	bool operator<(const Fixed& base) const;
	bool operator>=(const Fixed& base) const;
	bool operator<=(const Fixed& base) const;
	bool operator==(const Fixed& base) const;
	bool operator!=(const Fixed& base) const;

	Fixed operator+(const Fixed& base) const;
	Fixed operator-(const Fixed& base) const;
	Fixed operator*(const Fixed& base) const;
	Fixed operator/(const Fixed& base) const;

	//a++
	Fixed operator++(int);
	//++a
	Fixed& operator++(void);
	//a--
	Fixed operator--(int);
	//--a
	Fixed& operator--(void);

	Fixed& operator=(const Fixed& base);
	~Fixed( void );

	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
	float				toFloat( void ) const;
	int					toInt( void ) const;
	static Fixed&		min (Fixed& a, Fixed& b);
	static const Fixed&	min (const Fixed& a, const Fixed& b);
	static Fixed&		max (Fixed& a, Fixed& b);
	static const Fixed&	max (const Fixed& a, const Fixed& b);

private:

	int				 fixedPointNbr;
	static const int fractionalBits = 8;

};

std::ostream& operator<<(std::ostream& out, const Fixed& base);

#endif

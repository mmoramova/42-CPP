/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:26:07 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 13:12:55 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
# define Fixed_H

#include <iostream>
#include <iomanip>

class Fixed {

public:

	Fixed(void);
	Fixed(int const intNbr);
	Fixed(float const floatNbr);
	Fixed(Fixed const &copy);
	Fixed &operator=(Fixed const &base);
	~Fixed(void);

	bool operator>(const Fixed &base) const;
	bool operator<(const Fixed &base) const;
	bool operator>=(const Fixed &base) const;
	bool operator<=(const Fixed &base) const;
	bool operator==(const Fixed &base) const;
	bool operator!=(const Fixed &base) const;

	Fixed operator+(const Fixed &base) const;
	Fixed operator-(const Fixed &base) const;
	Fixed operator*(const Fixed &base) const;
	Fixed operator/(const Fixed &base) const;


	Fixed operator++(int);
	Fixed &operator++(void);
	Fixed operator--(int);
	Fixed &operator--(void);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
	static Fixed&		min(Fixed &a, Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static Fixed&		max(Fixed &a, Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);

private:

	int					_fixedPointNbr;
	static const int	_fractionalBits = 8;

};

std::ostream& operator<<(std::ostream &out, const Fixed &base);

#endif

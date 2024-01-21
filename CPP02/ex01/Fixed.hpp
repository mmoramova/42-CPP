/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:18:00 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 11:50:47 by mmoramov         ###   ########.fr       */
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
	Fixed(Fixed const &base);
	Fixed &operator=(Fixed const &base);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_fixedPointNbr;
	static const int	_fractionalBits = 8;

};

std::ostream& operator<<(std::ostream &out, const Fixed &base);

#endif

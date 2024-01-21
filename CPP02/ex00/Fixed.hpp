/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:39:33 by mmoramov          #+#    #+#             */
/*   Updated: 2024/01/21 11:37:39 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
# define Fixed_H

#include <iostream>
#include <iomanip>

class Fixed {

public:

	Fixed(void);
	Fixed(Fixed const &base);
	Fixed &operator=(Fixed const &base);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int					_fixedPointNbr;
	static const int	_fractionalBits = 8;

};

#endif

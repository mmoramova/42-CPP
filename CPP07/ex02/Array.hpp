/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:14:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/16 14:26:15 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iomanip>
#include <iostream>
#include <exception>
#include <string>

template <class T>
class Array {

public:
	Array(void);
	Array(unsigned int n);
	Array(Array const &copy);
	Array &operator=(Array const &base);
	virtual ~Array(void);

	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;

	unsigned int size(void) const;

	class OutOfRangeException;

private:
	T	*_array;
	unsigned int	_size;

};

#include "Array.tpp"

#endif

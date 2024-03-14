/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:26:50 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/14 17:36:39 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iomanip>
#include <iostream>
#include <string>

template <typename T> void swap(T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename T> T min(const T x, const T y)
{
	return (x < y) ? x : y;
}

template <typename T> T max(const T x, const T y)
{
	return (x > y) ? x : y;
}

#endif

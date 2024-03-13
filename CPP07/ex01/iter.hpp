/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:43:40 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/13 18:19:20 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iomanip>
#include <iostream>
#include <string>

template <typename T> void iter(const T *array, const int N, void (*f)(T))
{
	if (!array)
		return;
	for (int i = 0; i < N; i++)
		f(array[i]);
}

#endif


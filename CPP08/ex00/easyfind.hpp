/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:24:19 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/13 19:16:35 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_H
# define EASYFIND_H

#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
#include <exception>

class NotFoundException : public std::exception
{
	public:
		const char* what() const throw() {
			return ("Number not found");
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw NotFoundException();
	return (it);

}

#endif

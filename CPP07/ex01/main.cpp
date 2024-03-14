/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:42:20 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/14 17:40:13 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T a)
{
	std::cout << "Print: " << a << std::endl;
	return;
}

template <typename T>
void add(T a)
{
	std::cout << "Add: " << ++a << std::endl;
	return;
}


int main( void )
{
	int a[6] = {1,2,3,4,5,6};
	std::string b[5] = {"ab", "bc", "cd", "de", "ef"};
	char d[5] = {'a','b','c','d'};
	bool c[4] = {0,0,1,1};

	iter(a,6,print);
	iter(b,5,print);
	iter(c,8,print);
	iter(a,5,add);
	iter(d,4,add);
	return 1;

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:23:57 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/13 19:37:36 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <set>
#include <list>

int main (void)
{
	try
	{
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(1);
		vec.push_back(6);
		vec.push_back(9);
		vec.push_back(8);
		vec.push_back(1);

		int value = 8;

		std::vector<int>::iterator it = easyfind(vec,value);

		std::cout << "Vector: Number " << *it << " is at position " << std::distance(vec.begin(), it) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		std::set<int> s; //insert, erase, swap, clear

		s.insert(1);
		s.insert(2);
		s.insert(4);
		s.insert(8);
		s.insert(16);
		s.insert(32);
		s.insert(64);

		int value = 64;

		std::set<int>::iterator it = easyfind(s,value);

		std::cout << "Set: Number " << *it << " is at position " << std::distance(s.begin(), it) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		std::list<int> lst;
		lst.push_back(2);
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(7);
		lst.push_back(11);
		lst.push_back(13);
		lst.push_back(17);

		int value = 7;

		std::list<int>::iterator it = easyfind(lst,value);

		std::cout << "List: Number " << *it << " is at position " << std::distance(lst.begin(), it) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return(0);
}

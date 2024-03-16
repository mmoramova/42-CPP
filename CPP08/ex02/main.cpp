/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:25:06 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/16 12:28:56 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <stack>
#include <vector>

int main()
{
	{
		std::cout << "MutantStack" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
	}
	{
		std::cout << "List" << std::endl;
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << *++mlist.begin() << std::endl;
		mlist.pop_back();
		std::cout << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		//[...]
		mlist.push_back(0);

		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Vector" << std::endl;
		std::vector<int> mvector;
		mvector.push_back(5);
		mvector.push_back(17);
		std::cout << *++mvector.begin() << std::endl;
		mvector.pop_back();
		std::cout << mvector.size() << std::endl;
		mvector.push_back(3);
		mvector.push_back(5);
		mvector.push_back(737);
		//[...]
		mvector.push_back(0);

		std::vector<int>::iterator it = mvector.begin();
		std::vector<int>::iterator ite = mvector.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
	}

	return 0;
}

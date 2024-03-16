/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:25:26 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/16 12:05:54 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <stack>

template <class T>
class MutantStack : public std::stack<T> {

public:

	typedef typename std::stack<T>::container_type container;
	typedef typename container::iterator iterator;
	typedef typename container::const_iterator const_iterator;
	typedef typename container::reverse_iterator reverse_iterator;
	typedef typename container::const_reverse_iterator const_reverse_iterator;

	MutantStack(void);
	MutantStack(const T& value);
	MutantStack(MutantStack const &copy);
	MutantStack &operator=(MutantStack const &base);
	~MutantStack(void);

	iterator begin ();
	iterator end ();
	const_iterator cbegin () const;
	const_iterator cend ()  const;
	reverse_iterator rbegin ();
	reverse_iterator rend ();
	const_reverse_iterator crbegin () const;
	const_reverse_iterator crend () const;

private:

};

#include "MutantStack.tpp"

#endif

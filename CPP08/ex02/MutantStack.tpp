/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:25:31 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/16 12:29:54 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const T& value) : std::stack<T>()
{
	push(value);
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &copy) : std::stack<T>(copy) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const &base)
{
	if (this != &base)
		std::stack<T>::operator=(base);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin ()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end ()
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin ()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend ()
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin () const
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend () const
{
	return this->c.end();
}

#endif

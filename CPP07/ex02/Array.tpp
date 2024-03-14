/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:58:05 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/14 17:50:07 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	_array = nullptr;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_array = new T[_size]();
}

template <typename T>
Array<T>::Array(Array<T> const &copy)
{
	_size = copy._size;
	if (_size > 0)
		_array = new T[_size]();
	else
		_array = nullptr;
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = copy._array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const &base)
{
	if (this != &base)
	{
		if (_array)
			delete[] _array;
		_size = base._size;
		if (_size > 0)
		{
			_array = new T[_size]();
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = base._array[i];
		}
		else
			_array = nullptr;
	}
	return *this;
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= _size)
	{
		throw OutOfRangeException();
	}
	return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index < 0 || index >= _size)
	{
		throw OutOfRangeException();
	}
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return(_size);
}

template <typename T>
class Array<T>::OutOfRangeException : public std::exception
{
	public:
		const char* what() const throw() {
			return ("Index is out of range");
		}
};


#endif

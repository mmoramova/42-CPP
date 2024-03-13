/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:58:05 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/13 18:17:04 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <class T>
Array<T>::Array(void)
{
	_array = nullptr;
	_size = 0;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_array = new T[_size];
}

template <class T>
Array<T>::Array(Array<T> const &copy)
{
	_size = copy._size;
	if (_size > 0)
		_array = new T[_size];
	for (int i = 0; i < _size; i++)
		_array[i] = copy._array[i];
}

template <class T>
Array<T>& Array<T>::operator=(Array<T> const &base)
{
	if (this != &base)
	{
		if (_array)
			delete[] _array;
		_size = base._size;
		if (_size > 0)
		{
			_array = new T[_size];
			for (int i = 0; i < _size; i++)
				_array[i] = base._array[i];
		}
		else
			_array = nullptr;
	}
	return *this;
}

template <class T>
Array<T>::~Array(void)
{
	delete[] _array;
}

template <class T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || index >= _size)
	{
		throw OutOfRangeException();
	}
	return _array[index];
}

template <class T>
const T& Array<T>::operator[](int index) const
{
	if (index < 0 || index >= _size)
	{
		throw OutOfRangeException();
	}
	return _array[index];
}

template <class T>
int Array<T>::size(void)
{
	return(_size);
}

template <class T>
class Array<T>::OutOfRangeException : public std::exception
{
	public:
		const char* what() const throw() {
			return ("Index is out of range");
		}
};


#endif

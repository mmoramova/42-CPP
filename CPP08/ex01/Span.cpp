/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:39:07 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/14 19:21:38 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span(void) : _size(0) {}

Span::Span(unsigned int N) : _size(N) {}

Span::Span(Span const &copy) : _vector(copy._vector), _size(copy._size) {}

Span &Span::operator=(Span const &base)
{
	if (this != &base)
	{
		this->_size = base._size;
		this->_vector = base._vector;
	}
	return *this;
}

Span::~Span(void) {}

void	Span::addNumber(int nbr)
{
	if (this->_vector.size() >= this->_size)
		throw std::overflow_error("addNumber: Size overflow");
	this->_vector.push_back(nbr);
	std::cout << "Pushed back number " << nbr << std::endl;
}

void	Span::bulkAddNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (begin >= end)
		throw std::out_of_range("bulkAddNumber: Inputs are out of range");

	for (; begin != end; begin++)
	{
		this->addNumber(*begin);
	}
}

int	Span::shortestSpan(void)
{
	size_t vecSize = this->_vector.size();
	int minDistance = INT_MAX;
	int actDistance;

	if (this->_vector.empty() || vecSize == 1)
		throw std::logic_error("shortestSpan: Size of the vector is less than 2");

	std::sort(this->_vector.begin(), this->_vector.end());
	for (size_t i = 0; i < (vecSize - 1); i++)
	{
		actDistance = this->_vector[i + 1] - this->_vector[i];
		if (actDistance < minDistance)
			minDistance = actDistance;
	}
	return (minDistance);
}

long int	Span::longestSpan(void)
{
	if (this->_vector.empty() || this->_vector.size() == 1)
		throw std::logic_error("longestSpan: Size of the vector is less than 2");

	std::sort(this->_vector.begin(), this->_vector.end());
	long int minValue = this->_vector.front();
	long int maxValue = this->_vector.back();
	return (maxValue - minValue);
}

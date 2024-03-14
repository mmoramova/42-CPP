/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:39:13 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/14 19:23:31 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <vector>

class Span {

public:
	Span(void);
	Span(unsigned int N);
	Span(Span const &copy);
	Span &operator=(Span const &base);
	~Span(void);

	void		addNumber(int nbr);
	void		bulkAddNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int			shortestSpan();
	long int	longestSpan();

private:
	std::vector<int> _vector;
	unsigned int 	 _size;

};

#endif

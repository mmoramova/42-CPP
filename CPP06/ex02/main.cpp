/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:35:56 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/02 14:23:31 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {

	int rnbr = rand();

	switch (rnbr % 3)
	{
	case 0:
		return (new A());
		break;
	case 1:
		return (new B());
		break;
	case 2:
		return (new C());
		break;
	default:
		std::cout << "error" << std::endl;
		return (nullptr);
		break;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Object was identified as a class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object was identified as a class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object was identified as a class C" << std::endl;
	else
		std::cout << "Object was not identified" << std::endl;
}

void identify(Base& p) {
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "Object was identified as a class A" << std::endl;
	}
	catch (const std::bad_cast& ex)
	{
		try
		{
			(void) dynamic_cast<B&>(p);
			std::cout << "Object was identified as a class B" << std::endl;
		}
		catch (const std::bad_cast& ex)
		{
			try
			{
				(void) dynamic_cast<C&>(p);
				std::cout << "Object was identified as a class C" << std::endl;
			}
			catch (const std::bad_cast& ex)
			{
				std::cout << "Object was not identified" << std::endl;
			}
		}
	}
}

int main (void)
{
	srand(time(NULL));

	Base *A;

	A = generate();
	identify(A);
	identify(*A);

	delete A;
	return(0);
}

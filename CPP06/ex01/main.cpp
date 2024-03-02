/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:59:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/02 13:22:20 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (void)
{
	Data Data1;

	Data1.boolean = 1;
	Data1.number = 90;
	Data1.string = "HELLO";

	std::cout << "Input data:" << std::endl;
	std::cout << Data1.boolean << std::endl;
	std::cout << Data1.number << std::endl;
	std::cout << Data1.string << std::endl;

	uintptr_t serialized;

	serialized = Serializer::serialize(&Data1);

	std::cout << "After serialization:" << std::endl;
	std::cout << serialized << std::endl;
	std::cout << &serialized << std::endl;

	Data *deserialized;

	deserialized = Serializer::deserialize(serialized);

	std::cout << "After deserialization:" << std::endl;
	std::cout << deserialized->boolean << std::endl;
	std::cout << deserialized->number << std::endl;
	std::cout << deserialized->string << std::endl;

	return(0);
}

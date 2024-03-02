/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:59:14 by mmoramov          #+#    #+#             */
/*   Updated: 2024/03/02 13:23:17 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_H
# define Serializer_H

#include <iostream>
#include "Data.h"

class Serializer {

public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

private:
	Serializer(void);
	Serializer(Serializer const &copy);
	Serializer &operator=(Serializer const &base);
	~Serializer(void);
};

#endif

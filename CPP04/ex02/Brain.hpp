/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:39:04 by mmoramov          #+#    #+#             */
/*   Updated: 2024/02/02 18:23:35 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_H
# define Brain_H

#include <iomanip>
#include <iostream>

class Brain {

public:
	Brain(void);
	Brain(Brain const &copy);
	Brain &operator=(Brain const &base);
	virtual ~Brain(void);

	void			setIdea(int i, std::string idea);
	std::string		getIdea(int i) const;

private:

	std::string		_ideas[100];

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:34:52 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 09:13:41 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	if (this == &brain)
		return (*this);
	for (int i = 0; i<100; i++)
    	this->ideas[i] = brain.ideas[i];
  	return *this;
}

Brain::Brain(const Brain &cpy)
{
	*this = cpy;
}

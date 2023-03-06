/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:34:52 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/02 16:00:42 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
	std::string	words[6] = {"one", "two", "three", "four", "five", "six"};
	for (int i = 0; i<6; i++)
	{
		int random = std::rand() % 6;
		this->ideas[i] = words[random];
	}
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

void	Brain::printIdeas() const
{
	for (int i = 0; i < 6; i++)
    {
        std::cout << ideas[i] << " ";
    }
	std::cout << std::endl;
}
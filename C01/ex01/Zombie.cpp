/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:48:43 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/13 18:45:22 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "A zombie has escaped" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " has been slain" << std::endl;
}

void	Zombie::announce(void)
{
	if (name.empty())
		std::cout << "No zombie here..." << std::endl;
	else
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetName(std::string name)
{
	this->name = name;
}
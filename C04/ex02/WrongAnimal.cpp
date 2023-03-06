/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 11:11:27 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 09:07:11 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Created WrongAnimal" << std::endl;
	if (!this->type.size())
		this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destroyed " << this->type << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Yes I play vayne top, how could you tell?" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ass)
{
    if (this == &ass)
        return *this;
    std::cout << "assignement copy called" << std::endl;
    this->type = ass.getType();
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    std::cout << "copy constructor called" << std::endl;
    *this = cpy;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:15:20 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 09:13:08 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    if (!this->type.size())
        this->type = "WrongAnimal";
    std::cout << "Created animal" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[ Animal ] Destroyed " << this->type << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

Animal  &Animal::operator=(const Animal &replacement)
{
    if (this == &replacement)
        return *this;
    this->type = replacement.getType();
    return *this;
}

void    Animal::makeSound() const
{
    std::cout << "Animals don't make sounds" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
    std::cout << "copy constructor called" << std::endl;
    *this = cpy;
}

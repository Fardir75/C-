/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:15:20 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/28 12:57:16 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Created animal" << std::endl;
    if (!this->type.size())
        this->type = "WrongAnimal";
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
    this->type = replacement.getType();
    return *this;
}

void    Animal::makeSound() const
{
    if (getType() == "Dog")
        std::cout << "Ouaf" << std::endl;
    else if (getType() == "Cat")
        std::cout << "Nyaaa" << std::endl;
    else
        std::cout << "Wrong Animal" << std::endl;
}
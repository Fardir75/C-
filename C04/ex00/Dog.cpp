/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:14:59 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 08:57:40 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "[ doggo ] Created Dog" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "[ doggo ] Destroyed Dog" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Ouaf" << std::endl;
}

Dog &Dog::operator=(const Dog &ass)
{
    if (this == &ass)
        return *this;
    std::cout << "assignement copy called" << std::endl;
    this->type = ass.getType();
    return *this;
}

Dog::Dog(const Dog &cpy) : Animal()
{
    std::cout << "copy constructor called" << std::endl;
    *this = cpy;
}
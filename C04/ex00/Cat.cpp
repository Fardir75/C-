/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:15:06 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/25 17:06:18 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "[ cat ] Created Cat" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "[ cat ] Destroyed Cat" << std::endl;
}

void    Cat::makeSound()
{
    std::cout << "Nyaaaa" << std::endl;
}

Cat &Cat::operator=(const Cat &ass)
{
    if (this == &ass)
        return *this;
    std::cout << "assignement copy called" << std::endl;
    this->type = ass.getType();
    return *this;
}

Cat::Cat(const Cat &cpy)
{
    std::cout << "copy constructor called" << std::endl;
    *this = cpy;
}
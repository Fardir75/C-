/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:15:06 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/28 13:42:23 by eavilov          ###   ########.fr       */
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
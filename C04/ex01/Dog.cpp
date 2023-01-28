/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:14:59 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/28 13:42:57 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "[ doggo ] Created Dog" << std::endl;
    this->type = "Dog";
    this->ideas = new Brain();
}

Dog::~Dog()
{
    std::cout << "[ doggo ] Destroyed Dog" << std::endl;
    delete this->ideas;
}

void    Dog::makeSound()
{
    std::cout << "Ouaf" << std::endl;
}

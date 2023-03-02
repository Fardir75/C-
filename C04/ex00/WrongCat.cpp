/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 11:11:12 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 08:57:52 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Created WrongCat" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Destroyed WrongCat type" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "I'm not a cat retard" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &ass)
{
    if (this == &ass)
        return *this;
    std::cout << "assignement copy called" << std::endl;
    this->type = ass.getType();
    return *this;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal()
{
    std::cout << "copy constructor called" << std::endl;
    *this = cpy;
}
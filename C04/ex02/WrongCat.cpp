/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 11:11:12 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/01 09:17:52 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()  : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Created WrongCat" << std::endl;
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
    std::cout << "assignement copy called" << std::endl;
    if (this == &ass)
        return *this;
    this->type = ass.getType();
    return *this;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal()
{
    std::cout << "copy constructor called" << std::endl;
    *this = cpy;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:09:10 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/21 09:57:26 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructer called" << std::endl;
	this->integer = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->integer;
}

void	Fixed::setRawBits(int const raw)
{
	this->integer = raw;
}

Fixed	&Fixed::operator=(const Fixed &ass)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &ass)
		this->integer = ass.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(cpy.getRawBits());
}

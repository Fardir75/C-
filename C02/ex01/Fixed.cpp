/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:09:10 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/25 11:28:40 by eavilov          ###   ########.fr       */
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

Fixed::Fixed(int nb_int) : integer(nb_int << fractional_integer)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float nb_float) : integer(roundf(nb_float * (1 << fractional_integer)))
{
	std::cout << "Float constructor called" << std::endl;
}

int	Fixed::toInt() const
{
	return this->integer >> fractional_integer;
}

float   Fixed::toFloat() const
{
    return static_cast<float>(this->getRawBits()) / (1 << fractional_integer);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

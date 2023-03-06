/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:09:10 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/22 16:51:18 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructer called" << std::endl;
	this->integer = 0;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
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
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &ass)
		this->integer = ass.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &cpy)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(cpy.getRawBits());
}

Fixed::Fixed(int nb_int) : integer(nb_int << fractionalInteger)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float nb_float) : fValue(nb_float)
{
	//std::cout << "Float constructor called" << std::endl;
}

int	Fixed::toInt() const
{
	return this->integer >> fractionalInteger;
}

float   Fixed::toFloat() const
{
    return static_cast<float>(this->getRawBits()) / (1 << fractionalInteger);
}

float	Fixed::getF() const
{
	return this->fValue;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

Fixed   &Fixed::operator++()
{
    ++this->integer;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed old = *this;
    ++*this;
    return old;
}

Fixed	&Fixed::operator--()
{
	--this->integer;
	return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed old = *this;
    --*this;
    return old;
}

Fixed	Fixed::operator+(const Fixed &plus) const
{
	return Fixed(this->toFloat() + plus.toFloat());
}

Fixed	Fixed::operator-(const Fixed &minus) const
{
	return Fixed(this->toFloat() - minus.toFloat());
}

Fixed	Fixed::operator*(const Fixed &mult) const
{
	return Fixed(this->toFloat() * mult.toFloat());
}

Fixed	Fixed::operator/(const Fixed &div) const
{
	return Fixed(this->toFloat() / div.toFloat());
}

bool	Fixed::operator<(const Fixed &comp)
{
	return this->getRawBits() < comp.getRawBits();
}

bool	Fixed::operator>(const Fixed &comp)
{
	return this->getRawBits() > comp.getRawBits();
}

bool	Fixed::operator<=(const Fixed &comp)
{
	return this->getRawBits() <= comp.getRawBits();
}

bool	Fixed::operator>=(const Fixed &comp)
{
	return this->getRawBits() >= comp.getRawBits();
}

bool	Fixed::operator!=(const Fixed &comp)
{
	return this->getRawBits() != comp.getRawBits();
}

bool	Fixed::operator==(const Fixed &comp)
{
	return this->getRawBits() == comp.getRawBits();
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:33:38 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/14 19:14:05 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{}

Point::~Point()
{}

Point::Point(const Point &cpy) : x(cpy.getX()), y(cpy.getY())
{}

Point::Point(const float x, const float y) : x(x), y(y)
{}

Point   &Point::operator=(const Point &ass)
{
    (void) ass;
    return *this;
}

float Point::getX() const
{
    return this->x.getF();
}

float Point::getY() const
{
    return this->y.getF();
}
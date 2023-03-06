/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:34:34 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/14 19:13:42 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class   Point
{
    private:
        const Fixed   x;
        const Fixed   y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &cpy);
        ~Point();
        float     getX() const;
        float     getY() const;

        Point &operator=(const Point &ass);
};

#endif

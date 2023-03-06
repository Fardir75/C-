/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:27:24 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/22 16:52:47 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float sign(Point p1, Point p2, Point p3)
{
    //std::cout << p1.getX() << " " << p3.getX() << " " << p2.getY() << " " << p3.getY() << " " << p2.getX() << " " << p3.getX() << " " << p1.getY() << " " << p3.getY() << std::endl;;
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const dot)
{
    float   d1, d2, d3;
    float   divergence = -0.03f; // geogebra floats are too precise...
    bool    neg, pos;

    d1 = sign(dot, a, b);
    d2 = sign(dot, b, c);
    d3 = sign(dot, c, a);
    /* displays coordinates divergence from the triangle */
    //std::cout << d1 << " " << d2 << " " << d3 << " " << std::endl;

    neg = (d1 < divergence) || (d2 < divergence) || (d3 < divergence);
    pos = (d1 > divergence) || (d2 > divergence) || (d3 > divergence);
    //std::cout << "result: " << pos << " / " << neg << std::endl;
    return !(neg && pos);
}

int main()
{
    /*  Triangle  */
	Point const a(2.01f, 2.04f);
    Point const b(9.62f, 11.68f);
    Point const c(11.52f, 0.48f);

    Point ass = c;
    
    std::cout << ass.getX() << " " << ass.getY() << std::endl; // should display values of 'c'

    Point const dot1(6.51f, 3.88); // Inside triangle
    Point const dot2(10.83f, 4.54f); // On a plane
    Point const dot3(11.0f, 6.22f); // Outside triangle
    Point const dot4(11.52f, 0.48f); // On a corner (c)
    Point const dot5(9.6f, 11.6f); // Inside but VERY close to 'b'
    Point const dot6(4.71f, 1.6f); // On a plane
    Point const dot7(3.03f, 3.33); // On a plane
    Point const dot8(2.02, 2.04); // On a plane very close to 'a'

    std::cout << bsp(a, b, c, dot1) << std::endl; // should be 1
    std::cout << bsp(a, b, c, dot2) << std::endl; // should be 0
    std::cout << bsp(a, b, c, dot3) << std::endl; // should be 0
    std::cout << bsp(a, b, c, dot4) << std::endl; // should be 0
    std::cout << bsp(a, b, c, dot5) << std::endl; // should be 1
    std::cout << bsp(a, b, c, dot6) << std::endl; // should be 0
    std::cout << bsp(a, b, c, dot7) << std::endl; // should be 0
    std::cout << bsp(a, b, c, dot8) << std::endl; // should be 0
}

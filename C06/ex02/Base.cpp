/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:15:40 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/08 17:20:13 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

Base::~Base()
{
    std::cout << "Base destroyed" << std::endl;
}

Base    *generate(void)
{
    int     i = rand() % 3;
    Base    *ptr;

    switch (i)
    {
        case 0:
            ptr = new A;
            std::cout << "generated ptr = A" << std::endl;
            break;
        case 1:
            ptr = new B;
            std::cout << "generated ptr = B" << std::endl;
            break;
        case 2:
            ptr = new C;
            std::cout << "generated ptr = C" << std::endl;
            break;
        default:
            std::cout << "Error in generate function" << std::endl;
            break;
    }
    return (ptr);
}

void    identify(Base *p)
{
    A   *new_a = dynamic_cast<A*>(p);
    B   *new_b = dynamic_cast<B*>(p);
    C   *new_c = dynamic_cast<C*>(p);
    
    if (new_a)
        std::cout << "p* = A" << std::endl;
    else if (new_b)
        std::cout << "p* = B" << std::endl;
    else if (new_c)
        std::cout << "p* = C" << std::endl;
}

void    identify(Base &p)
{
    try {
        A   new_a = dynamic_cast<A&> (p);
        std::cout << "p& = A" << std::endl;
    } catch(const std::exception &e) {}
    try {
        B   new_b = dynamic_cast<B&> (p);
        std::cout << "p& = B" << std::endl;
    } catch(const std::exception &e) {}
    try {
        C   new_c = dynamic_cast<C&> (p);
        std::cout << "p& = C" << std::endl;
    } catch(const std::exception &e) {};
}

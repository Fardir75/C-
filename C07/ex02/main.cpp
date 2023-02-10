/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/10 16:16:43 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<unsigned int> a(-42);
    }
    catch (Array<unsigned int>::IncorrectSize &e)
    {
        std::cout << "Couldn't initialize your variable - " << e.whaat() << std::endl;
    }
    Array<unsigned int> a(42);
    try
    {
        std::cout << a[10] << std::endl;
    }
    catch (Array<unsigned int>::IndexOutOfRange &e)
    {
        std::cout << "Couldn't find value in your array, reason: " << e.whaat() << std::endl;
    }
    try
    {
        std::cout << a[-89] << std::endl;
    }
    catch (Array<unsigned int>::IndexOutOfRange &e)
    {
        std::cout << "Couldn't find value in your array - " << e.whaat() << std::endl;
    }
    std::cout << "variable 'a' has " << a.getSize() << " elements" << std::endl;
}

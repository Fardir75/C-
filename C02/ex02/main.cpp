/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/26 11:08:24 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

// My Own Tests

/*    std::cout << (a < b) << std::endl;
    std::cout << a + a << std::endl;
    std::cout << b * a << std::endl;
    std::cout << b / 2 << std::endl;
    if (a < b)
        std::cout << "a < b" << std::endl;
    Fixed c(5);
    if (c == 10)
        std::cout << "c == 5" << std::endl;
*/
    return 0;
}

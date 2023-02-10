/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/09 14:00:22 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::string words[] = {"Resolution", "Vitre", "Porte"};

    std::cout << "  [   Printing original tab   ]" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << array[i] << ' ';
    std::cout << std::endl;
    std::cout << "  [   Applying template function  ]" << std::endl;
    iter(array, 10, print);
    std::cout << "  [   Printing original array   ]" << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << words[i] << ' ';
    std::cout << std::endl;
    std::cout << "  [   Applying template function  ]" << std::endl;
    iter(words, 3, print);
}

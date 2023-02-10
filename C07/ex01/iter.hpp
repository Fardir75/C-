/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:05:49 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/09 14:00:43 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstring>

template <class P>
void    print (P elem) {
    std::cout << elem << std::endl;
}

template <class ITER>
void iter (ITER tab[], int size, void (*function)(ITER &)) {
    for (int i=0; i < size; i++)
    {
        function(tab[i]);
    }
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:35:47 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/08 17:58:49 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class T>
void swap (T &a, T &b) {
    T c = a;
    a = b;
    b = c;
}

template <class S>
S min (S a, S b) {
    if (a<b)
        return a;
    else
        return b;    
}

template <class M>
M max (M a, M b) {
    if (a>b)
        return a;
    else
        return b;    
}

#endif

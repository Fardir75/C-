/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:25:35 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/07 17:17:23 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <cmath>
#include <stdint.h>

struct  Data {
    std::string str1;
    int         value;
};

struct Data2 {
    std::string str1;
    float       fValue;
    std::string str2;
    double      dValue;
};

uintptr_t   serialize(Data *ptr);
Data       *deserialize(uintptr_t raw);
uintptr_t   serialize_two(Data2 *ptr);
Data2       *deserialize_two(uintptr_t raw);

#endif

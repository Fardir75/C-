/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:10:33 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/07 17:17:17 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize(Data *ptr)
{
    return reinterpret_cast <uintptr_t> (ptr);
}

uintptr_t serialize_two(Data2 *ptr)
{
    return reinterpret_cast <uintptr_t> (ptr);
}

Data       *deserialize(uintptr_t raw)
{
    return reinterpret_cast <Data*> (raw);
}

Data2       *deserialize_two(uintptr_t raw)
{
    return reinterpret_cast <Data2*> (raw);
}

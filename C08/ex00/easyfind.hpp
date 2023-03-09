/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 08:39:36 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/08 08:55:02 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
void easyfind (T& object, int value)
{
	if (std::count(object.begin(), object.end(), value) > 0)
		std::cout << "Value found" << std::endl;
	else
		std::cout << "Value not found" << std::endl;	
}

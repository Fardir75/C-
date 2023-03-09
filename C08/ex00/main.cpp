/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 08:40:42 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/08 10:00:04 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	print(int i)
{
	std::cout << i << ' ';
}

int main()
{
	int		array[] = {0,1,2,3,4,5,6,7,8,9};
	std::vector<int> vect(array, array + (sizeof(array) / sizeof(array[0])));

	easyfind(vect, 5);
	easyfind(vect, 42);
	for_each(vect.begin(), vect.end(), print);
	std::cout << std::endl;
	std::cout << vect.size() << std::endl;
}

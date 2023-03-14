/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:21:14 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/11 14:28:33 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	myError(const char *message)
{
	std::cout << "Error: " << message;
	std::cout << std::endl;
	return true;
}

bool	isNum(char c)
{
	if ((c <= '9' && c >= '0'))
		return true;
	return false;
}

bool	myParsing(char **av)
{
	int	i = 0;
	int	y = 0;

	while (av[i])
	{
		while ((av[i][y]))
		{
			if (!isNum(av[i][y]))
				return true;
			y++;
		}
		i++;
		y = 0;
	}
	return false;
}

void	displayArray(std::vector<int> vArray)
{
	for (std::vector<int>::iterator it = vArray.begin(); it != vArray.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
}

void	fillVector(std::vector<int> *vArray, char **av)
{
	int	i = 0;

	while (av[i])
	{
		vArray->push_back(atoi(av[i]));
		i++;
	}
}

void	fillDeque(std::deque<int> *dArray, char **av)
{
	int	i = 0;

	while (av[i])
	{
		dArray->push_back(atoi(av[i]));
		i++;
	}
}
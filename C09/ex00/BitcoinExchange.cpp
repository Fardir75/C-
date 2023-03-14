/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:29:25 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/14 13:32:17 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	myError(const char *message)
{
	std::cout << "Error: " << message;
	std::cout << std::endl;
	return true;
}

int	fileParsing(std::map<std::string,double> *fileMap, std::string fileContent)
{
	int			comma = 0;
	double		multiplier = 0;
	std::string	cpy = fileContent.substr(0, fileContent.find(","));
	if (cpy == "date")
		return 2;
	for (size_t i = 0; i < fileContent.size(); i++)
	{
		if (fileContent[i] == ',')
		{
			comma++;
			multiplier = std::strtod(&fileContent.c_str()[i + 1], NULL);
			break ;
		}
	}
	if (comma != 1)
		return 0;
	fileMap->insert(std::pair<std::string,double>(cpy,multiplier));
	return 1;
}

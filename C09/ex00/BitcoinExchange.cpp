/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:29:25 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/15 17:29:39 by eavilov          ###   ########.fr       */
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

int	inputParsing(std::list<std::string> *bitDates, std::list<double> *bitValues, std::string fileContent)
{
	int		baton = 0;
	std::string	cpy = (fileContent.substr(0, fileContent.find("|")));
	if (cpy == "date ")
		return 2;
	bitDates->push_back(fileContent.substr(0, 10));
	for (size_t i = 0; i < fileContent.size(); i++)
	{
		if (fileContent[i] == '|')
		{
			baton++;
			bitValues->push_back(std::strtod(&fileContent.c_str()[i + 1], NULL));
			break ;
		}
	}
	if (baton != 1)
	{
		bitValues->push_back(-42);
		return 1;
	}
	return 0;
}

int	isRecent(double year, double month, double day, std::list<std::string>::iterator it)
{
	double	yearIt = std::strtod(it->substr(0, it->find('-')).c_str(), NULL);
	double	monthIt = std::strtod(it->substr(5, 2).c_str(), NULL);
	double	dayIt = std::strtod(it->substr(8, 2).c_str(), NULL);
	if ((yearIt < 2010 || yearIt > 2023) || (monthIt < 0 || monthIt > 12) || (dayIt < 0 || dayIt > 30))
		return 1;
	if (yearIt > year)
		return 0;
	else if (monthIt > month)
		return 0;
	else if (dayIt > day)
		return 0;
	return 1;
}

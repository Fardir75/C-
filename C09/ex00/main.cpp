/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:29:42 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/15 16:08:00 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	isRecent(double year, double month, double day, std::list<std::string>::iterator it)
{
	double	yearIt = std::strtod(it->substr(0, 4).c_str(), NULL);
	double	monthIt = std::strtod(it->substr(5, 2).c_str(), NULL);
	double	dayIt = std::strtod(it->substr(8, 2).c_str(), NULL);
	if (yearIt < 2010 || (monthIt < 0 || monthIt > 12) || (dayIt < 0 || dayIt > 30))
	{
		return 1;
	}
	if (yearIt > year)
	{
		return 0;
	}
	else if (monthIt > month)
	{
		return 0;
	}
	else if (dayIt > day)
	{
		return 0;
	}
	return 1;
}

void	theBigAlgo(std::map<std::string,double> fileMap, char *file)
{
	std::ifstream	input(file);
	std::string		fileContent;
	std::list<std::string>			bitDates;
	std::list<double>				bitValues;
	size_t							maxSize = 0;
	
	while (getline(input, fileContent))
		inputParsing(&bitDates, &bitValues, fileContent);
	std::map<std::string,double>::iterator fIt = fileMap.begin();
	std::list<std::string>::iterator it = bitDates.begin();
	std::list<double>::iterator it2 = bitValues.begin();
	while (it != bitDates.end())
	{
		double	year = std::strtod(fIt->first.substr(0, 4).c_str(), NULL);
		double	month = std::strtod(fIt->first.substr(5, 2).c_str(), NULL);
		double	day = std::strtod(fIt->first.substr(8, 2).c_str(), NULL);
		if (isRecent(year, month, day, it) || maxSize == fileMap.size())
		{
			if (std::strtod(it->substr(0, 4).c_str(), NULL) < 2010 || (month < 0 || month > 12) || (day < 0 || day > 30))
				std::cout << "Error: bad input => " << *it << std::endl;
			else if (*it2 < 0)
				std::cout << "Error: negative integer." << std::endl;
			else if (*it2 > 1000)
				std::cout << "Error: number too large." << std::endl;
			else
			{
				if (maxSize != 0)
					fIt--;
				std::cout << *it << " => " << *it2 << " = ";
				std::cout << fIt->second * *it2 << std::endl;
			}
			it++;
			it2++;
		}
		else
		{
			maxSize++;
			fIt++;
		}
	}
	input.close();
}

int	main(int ac, char **av)
{
	std::map<std::string,double>	fileMap;
	std::ifstream	file("data.csv");
	std::string		fileContent;
	if (file.fail())
		return myError("couldn't open data.csv");
	while (getline(file, fileContent))
		fileParsing(&fileMap, fileContent);
	if (ac == 2)
		theBigAlgo(fileMap, av[1]);
	file.close();
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:29:42 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/15 17:29:47 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	isIncorrectIt(std::list<std::string>::iterator it)
{
	int	minus = 0;
	int numbers = 0;
	std::string	cpy = *it;
	for (size_t i = 0; i < cpy.size(); i++)
	{
		if (cpy[i] <= '9' || cpy[i] >= '0')
			numbers++;
		if (cpy[i] == '-')
			minus++;
	}
	if (minus + numbers != 12)
		return 1;
	return 0;
}

bool	isIncorrectfIt(std::map<std::string,double>::iterator fIt)
{
	int	minus = 0;
	int numbers = 0;
	for (size_t i = 0; i < fIt->first.size(); i++)
	{
		if (fIt->first[i] <= '9' || fIt->first[i] >= '0')
			numbers++;
		if (fIt->first[i] == '-')
			minus++;
	}
	if (minus + numbers != 12)
		return 1;
	return 0;
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
		if (!isIncorrectfIt(fIt))
		{
			double	year = std::strtod(fIt->first.substr(0, it->find('-')).c_str(), NULL);
			double	month = std::strtod(fIt->first.substr(5, 2).c_str(), NULL);
			double	day = std::strtod(fIt->first.substr(8, 2).c_str(), NULL);
			if (isRecent(year, month, day, it) || maxSize == fileMap.size())
			{
				if ((std::strtod(it->substr(0, 4).c_str(), NULL) < 2010 || std::strtod(it->substr(0, 4).c_str(), NULL) > 2023) || (month < 0 || month > 12) || (day < 0 || day > 30))
					std::cout << "Error: bad input => " << *it << std::endl;
				else if (*it2 < 0)
					std::cout << "Error: negative integer." << std::endl;
				else if (*it2 > 1000)
					std::cout << "Error: number too large." << std::endl;
				else if (isIncorrectIt(it))
					std::cout << "Incorrect value in input file" << std::endl;
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
		else
		{
			std::cout << "Error: incorrect values in .csv file" << std::endl;
			maxSize++;
			fIt++;
			it++;
			it2++;
		}
	}
	input.close();
}

int	main(int ac, char **av)
{
	std::map<std::string,double>	fileMap;
	std::ifstream	file("data2.csv");
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

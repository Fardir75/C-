/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:29:42 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/14 14:04:31 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	inputParsing(std::map<std::string,double> *bitcoinInfo, std::string fileContent)
{
	int		baton = 0;
	double	value = 0;
	std::string	cpy = fileContent.substr(0, fileContent.find("|"));
	if (cpy == "date ")
		return 2;
	std::cout << cpy << std::endl;
	for (size_t i = 0; i < fileContent.size(); i++)
	{
		if (fileContent[i] == '|')
		{
			baton++;
			value = std::strtod(&fileContent.c_str()[i + 2], NULL);
			break ;
		}
	}
	bitcoinInfo->insert(std::pair<std::string,double>(cpy,value));
	return 0;
}

void	theBigAlgo(std::map<std::string,double> fileMap, char *file)
{
	std::ifstream	input(file);
	std::string		fileContent;
	std::map<std::string,double>	bitcoinInfo;
	
	while (getline(input, fileContent))
		inputParsing(&bitcoinInfo, fileContent);
		std::cout << std::endl;
	for (std::map<std::string,double>::iterator it=bitcoinInfo.begin(); it!=bitcoinInfo.end(); ++it)
		std::cout << it->first << " => " << it->second << std::endl;
	std::cout << bitcoinInfo.size() << std::endl;
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
	// for (std::map<std::string,double>::iterator it=fileMap.begin(); it!=fileMap.end(); ++it)
	// 	std::cout << it->first << " => " << it->second << std::endl;
	if (ac == 2)
		theBigAlgo(fileMap, av[1]);
	file.close();
	return 0;
}

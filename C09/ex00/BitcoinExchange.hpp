/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:28:50 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/15 17:01:06 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <list>
#include <iostream>
#include <fstream>
#include <cstdlib>

bool	myError(const char *message);

int		fileParsing(std::map<std::string,double> *fileMap, std::string fileContent);
int	    inputParsing(std::list<std::string> *bitDates, std::list<double> *bitValues, std::string fileContent);
int	    isRecent(double year, double month, double day, std::list<std::string>::iterator it);

//void	theBigAlgo(std::map<std::string,double> fileMap, char *file);
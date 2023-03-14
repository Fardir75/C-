/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:28:50 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/14 13:14:06 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <cstdlib>

bool	myError(const char *message);

int		fileParsing(std::map<std::string,double> *fileMap, std::string fileContent);

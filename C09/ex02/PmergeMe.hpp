/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:45:13 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/11 14:31:24 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <ctime>
#include <iomanip>

bool	myError(const char *message);
bool	myParsing(char **av);
bool	isNum(char c);

void	displayArray(std::vector<int> vArray);
void	fillVector(std::vector<int> *vArray, char **av);
void	fillDeque(std::deque<int> *dArray, char **av);

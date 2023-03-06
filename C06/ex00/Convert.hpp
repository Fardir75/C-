/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:43:46 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/05 16:24:03 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONVERT_HPP
#define	CONVERT_HPP

#include <stdio.h>
#include <stdlib.h>
#include <cfloat>
#include <ctype.h>
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <cmath>
#include <climits>
#include <iomanip>
#include <cerrno>
#include <sstream>

void	convert(std::string	ArgValue);

int		isChar(std::string	ArgValue);
int		isDouble(std::string ArgValue);
int		isInt(std::string ArgValue);
int		isFloat(std::string ArgValue);

#endif

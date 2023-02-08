/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:43:46 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/01 15:19:30 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONVERT_HPP
#define	CONVERT_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <cfloat>

void	convert(std::string	ArgValue);

int		isChar(std::string	ArgValue);
int		isDouble(std::string ArgValue);
int		isInt(std::string ArgValue);
int		isFloat(std::string ArgValue);

#endif

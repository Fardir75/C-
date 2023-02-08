/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:44:12 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/07 16:24:33 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	isChar(std::string	ArgValue)
{
	if (ArgValue.size() == 1 && isprint(ArgValue[0]))
		return 1;
	return 0;
}

int	isFloat(std::string ArgValue)
{
	int	len = ArgValue.size();
	int	dot = 0;
	int	num = 0;
	int minus = 0;
	
	if (ArgValue[0] == '-')
		minus++;
	for (int i = 0; i < len; i++)
	{
		if (ArgValue[i] == '.')
			dot++;
		if (ArgValue[i] >= 48 && ArgValue[i] <= 57)
			num++;
	}
	if (ArgValue[len - 1] == 'f' && minus + dot + num == len - 1 && dot == 1)
		return 1;
	return 0;
}

int	isInt(std::string ArgValue)
{
	int	i = 0;
	if (ArgValue[0] == '-')
		i++;	
	while (i < ArgValue.size())
	{
		if (ArgValue[i] < 48 || ArgValue[i] > 57)
			return 0;
		i++;
	}
	return 1;	
}

int	isDouble(std::string ArgValue)
{
	int	dot = 0;
	int	num = 0;
	int minus = 0;

	if (ArgValue[0] == '-')
		minus++;
	for (int i = 0; i < ArgValue.size(); i++)
	{
		if (ArgValue[i] == '.')
			dot++;
		if (ArgValue[i] >= 48 && ArgValue[i] <= 57)
			num++;
	}
	if (dot + num + minus == ArgValue.size())
		return 1;
	return 0;
}

void	convert(std::string	ArgValue)
{
	long long	iValue = 0;
	float		fValue = 0.0f;
	double		dValue = 0.0;
	char		cValue = 0;
	
	if (ArgValue.size() == 0)
	{
		iValue = 0;
		fValue = static_cast<int>(iValue);
		dValue = static_cast<int>(iValue);
		cValue = static_cast<int>(iValue);
	}
	else if (isChar(ArgValue))
	{
		iValue = ArgValue[0];
		fValue = static_cast<int>(iValue);
		dValue = static_cast<int>(iValue);
		cValue = static_cast<int>(iValue);
	}
	else if (isInt(ArgValue))
	{
		iValue = atoi(ArgValue.c_str());
		fValue = static_cast<float>(iValue);
		dValue = static_cast<double>(iValue);
		cValue = static_cast<char>(iValue);
	}
	else if (isFloat(ArgValue))
	{
		iValue = std::stoi(ArgValue);
		fValue = atof(ArgValue.c_str());
		dValue = static_cast<double>(iValue);
	}
	else if (isDouble(ArgValue))
	{
		iValue = std::stoi(ArgValue);
		fValue = static_cast<float>(iValue);
		dValue = static_cast<double>(iValue);
		cValue = static_cast<char>(iValue);
	}
	std::cout << "char: ";
	if ((cValue >= 32 && cValue <= 47) || (cValue >= 58 && cValue <= 126))
        std::cout << "'" <<  cValue << "'" << std::endl;
	else if (cValue < 32 || cValue > 126 || (cValue >= 48 && cValue <= 57))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (iValue >= INT_MIN && iValue <= INT_MAX)
		std::cout << iValue << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: ";
    if (fValue >= INT_MIN && fValue <= INT_MAX)
    {
        if (iValue == fValue)
            std::cout << fValue << ".0f" << std::endl;
        else
            std::cout << fValue << "f" << std::endl;
	}
	std::cout << "double: ";
    if (dValue >= -DBL_MIN && dValue <= DBL_MAX)
    {
        if (dValue == fValue)
            std::cout << dValue << ".0" << std::endl;
        else
            std::cout << dValue << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

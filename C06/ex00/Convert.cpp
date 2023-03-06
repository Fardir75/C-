/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:44:12 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/05 18:01:47 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	impossible()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: NaNf" << std::endl;
	std::cout << "double: NaN" << std::endl;
	return 1;
}

int	isChar(std::string	ArgValue)
{
	if (ArgValue.size() == 1 && isprint(ArgValue[0]))
		return 1;
	return 0;
}

int	isFloat(std::string ArgValue)
{
	size_t	len = ArgValue.size();
	size_t	dot = 0;
	size_t	num = 0;
	size_t minus = 0;
	
	if (ArgValue[0] == '-')
		minus++;
	for (size_t i = 0; i < len; i++)
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
	size_t	i = 0;
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
	size_t	dot = 0;
	size_t	num = 0;
	size_t minus = 0;

	if (ArgValue[0] == '-')
		minus++;
	for (size_t i = 0; i < ArgValue.size(); i++)
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

bool	isPoint(std::string ArgValue)
{
	for (size_t i = 0;i<ArgValue.size();i++)
	{
		if (ArgValue[i] == '.' && (ArgValue[i + 1] != '0'))
			return 1;
	}
	return 0;
}

void	convert(std::string	ArgValue)
{
	long long	iValue = 0;
	float		fValue = 0.0f;
	double		dValue = 0.0;
	int			cValue = 0;
	
	for (size_t i = 0; i<ArgValue.size();i++)
	{
		if ((ArgValue[i] == '-' && i != 0) || (ArgValue[i] == '.' && i < 1))
			exit(impossible());
		if (ArgValue[i] == '.' && (ArgValue[i + 1] < 48 || ArgValue[i + 1] > 57))
			exit(impossible());
	}
	if (!ArgValue.size())
	{
		iValue = 0;
		fValue = static_cast<int>(iValue);
		dValue = static_cast<int>(iValue);
		cValue = static_cast<int>(iValue);
	}
	else if (isInt(ArgValue))
	{
		iValue = std::strtol(ArgValue.c_str(), NULL, 10);
		cValue = static_cast<int>(iValue);
		fValue = static_cast<double>(iValue);
		dValue = static_cast<double>(iValue);
	}
	else if (isChar(ArgValue))
	{
		cValue = ArgValue[0];
		iValue = static_cast<long long>(cValue);
		fValue = static_cast<double>(iValue);
		dValue = static_cast<double>(iValue);
	}
	else if (isFloat(ArgValue))
	{
		fValue = std::strtof(ArgValue.c_str(), NULL);
		dValue = static_cast<double>(fValue);
		iValue = atol(ArgValue.c_str());
		cValue = static_cast<int>(iValue);
	}
	else if (isDouble(ArgValue))
	{
		dValue = std::strtod(ArgValue.c_str(), NULL);
		iValue = atoi(ArgValue.c_str());
		fValue = static_cast<float>(dValue);
		cValue = static_cast<int>(dValue);
	}
	std::cout << "char: ";
	if ((cValue >= 32 && cValue <= 47) || (cValue >= 58 && cValue <= 126))
        std::cout << "'" <<  static_cast<char>(cValue) << "'" << std::endl;
	else if (cValue < 32 || cValue > 126 || (cValue >= 48 && cValue <= 57))
        std::cout << "Non displayable" << std::endl;
    else
	{
        std::cout << "impossible" << std::endl;
	}
	std::cout << "int: ";
	if (dValue >= INT_MIN && dValue <= INT_MAX)
		std::cout << iValue << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: ";
    if ((fValue <= -FLT_MIN || fValue <= FLT_MAX) || fValue == 0)
    {
		if (fValue > FLT_MAX)
			std::cout << "impossible" << std::endl;
        else if (iValue == fValue)
            std::cout << fValue << ".0f" << std::endl;
        else
            std::cout << fValue << "f" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "double: ";
    if ((dValue <= -DBL_MIN || dValue < DBL_MAX) || fValue == 0)
    {
		if (dValue > DBL_MAX)
			std::cout << "impossible" << std::endl;
        else if (!isPoint(ArgValue))
            std::cout << dValue << ".0" << std::endl;
        else
            std::cout << dValue << std::endl;
    }
    else
	{
        std::cout << "impossible" << std::endl;
	}
}

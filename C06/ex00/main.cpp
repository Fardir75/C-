/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:19:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/01 15:27:05 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	bullshitCheck(std::string ArgValue)
{
	if (ArgValue == "inf" || ArgValue == "inff" || ArgValue == "infl")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << "inff" << std::endl;
        std::cout << "double: " << "inf" << std::endl;
        return 1;
    }
    else if (ArgValue == "-inf" || ArgValue == "-inff" || ArgValue == "-infl")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << "-inff" << std::endl;
        std::cout << "double: " << "-inf" << std::endl;
        return 1;
    }
	else if (ArgValue == "nan" || ArgValue == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << "nanf" << std::endl;
        std::cout << "double: " << "nan" << std::endl;
        return 1;
    }
    return (0);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (bullshitCheck(argv[1]))
			return 0;
		else
			convert(argv[1]);
	}
}

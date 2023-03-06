/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:46:24 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/13 14:46:50 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream	file(argv[1]);
		std::string		replace_file = argv[1];
		std::string		content, cpy;
		std::string		occurence = argv[2];
		std::string		replace = argv[3];
		if (file.fail())
		{
			std::cout << "Issue with first file" << std::endl;
			return (1);
		}
		if (occurence.empty())
		{
			std::cout << "Second argument is invalid" << std::endl;
			return (1);
		}
		std::string		tmp = replace_file + ".replace";
		std::ofstream	file_replace(tmp.c_str());
		if (file_replace.fail())
		{
			std::cout << "Issue with second file" << std::endl;
			return (1);
		}
		if (file.is_open())
		{
			while (getline(file, content))
			{
				size_t	index = 0;
				while ((index = content.find(occurence, index)) != std::string::npos)
				{
					content.erase(index, occurence.length());
					content.insert(index, replace);
					index += replace.length();
				}
				cpy += content + '\n';
			}
			file_replace << cpy;
			file_replace.close();
			file.close();
			return (0);
		}
		file.close();
	}
	else
		std::cout << "Invalid argument" << std::endl;
}

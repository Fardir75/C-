/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:44:24 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/31 14:29:29 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrubbery Creation", 145, 137)
{
	const std::string	tmp = target + "_shrubbery";
	const char 			*created_file = tmp.c_str();
	std::ofstream		file(created_file);
	if (file.is_open())
	{
		for (int i = 0; i < 3; i++)
		{	file << "       _-_" << std::endl;
			file << "    /~~   ~~\\" << std::endl;
			file << " /~~         ~~\\" << std::endl;
			file << "{               }" << std::endl;
			file << " \\  _-     -_  /" << std::endl;
			file << "   ~  \\\\ //  ~" << std::endl;
			file << "_- -   | | _- _" << std::endl;
			file << "  _ -  | |   -_" << std::endl;
			file << "      // \\\\" << std::endl;
			file << std::endl;
		}
		file.close();
	}
	this->setTarget(target);
	std::cout << "Shrubbery Creation Form created for " << this->getTarget() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Form destroyed" << std::endl;
}

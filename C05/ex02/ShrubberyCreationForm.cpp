/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:44:24 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/29 14:09:02 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrubbery Creation", 145, 137)
{
	std::cout << "Shrubbery Creation Form created for " << target << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

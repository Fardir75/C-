/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:42:44 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/29 14:09:05 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robotomy Request", 72, 45)
{
	std::cout << "Robotomy Request Form created for " << target << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

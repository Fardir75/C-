/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:42:44 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/03 18:38:27 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robotomy Request", 72, 45)
{
	std::cout << "Robotomy BRRRRRRRRRRRTTTT Request Form  BrrrrRRRRrrrrrrrRRRRttt created for BBBBBRRRRRRRRRRRRRRrrrrrrRRRRTTT " << target << std::endl;
	this->setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	if (this == &cpy)
		return *this;
	*this = cpy;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form("Robotomy Request", 72, 45)
{
	*this = cpy;
}


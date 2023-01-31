/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:42:24 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/31 14:38:36 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("Presidential Pardon", 25, 5)
{
	std::cout << "Presidential Pardon Form created for " << target << std::endl;
	this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:42:51 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/29 13:52:28 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ROBOTOMYREQUESTFORM_HPP
#define	ROBOTOMYREQUESTFORM_HPP

#include "PresidentialPardonForm.hpp"

class RobotomyRequestForm : public Form
{
	private:
	public:
		RobotomyRequestForm(const std::string target);
		~RobotomyRequestForm();
};

#endif

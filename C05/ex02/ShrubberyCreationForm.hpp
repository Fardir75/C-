/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:43:38 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/31 14:31:17 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERYCREATIONFORM_HPP
#define	SHRUBBERYCREATIONFORM_HPP

#include "RobotomyRequestForm.hpp"

class ShrubberyCreationForm : public Form
{
	private:
	public:
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();
};

#endif

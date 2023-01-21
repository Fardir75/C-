/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:24:21 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/16 20:12:36 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl	
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		int	complain(std::string level);
	Harl();
	~Harl();
};

typedef	void(Harl::*FunctionPointer)();

#endif

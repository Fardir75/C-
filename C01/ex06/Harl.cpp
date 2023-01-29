/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:25:58 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/29 15:04:11 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	FunctionPointer	functions[4];
	std::string		levels[4];
	int				index = 0;
	int				switch_value = 0;
	
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	while (index < 4)
	{
		if (!levels[index].compare(level))
			switch_value += index + 1;
		index++;
	}
	switch (switch_value)
	{
		case 1:
		{
			(this->*functions[0])();
			(this->*functions[1])();
			(this->*functions[2])();
			(this->*functions[3])();
			break ;
		}
		case 2:
		{
			(this->*functions[1])();
			(this->*functions[2])();
			(this->*functions[3])();
			break ;
		}
		case 3:
		{
			(this->*functions[2])();
			(this->*functions[3])();
			break ;
		}
		case 4:
		{
			(this->*functions[2])();
			(this->*functions[3])();
			break ;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

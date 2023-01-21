/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:56:20 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/17 10:00:10 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	SizeCheck(std::string temp, std::string *object)
{
	unsigned long	len;

	len = 0;
	if (temp.length() <= 10)
	{
		*object += temp + " ";
	}
	else if (temp.length() > 10)
	{
		temp.resize(9);
		*object += "  " + temp + ".";
	}
}

void	Contact::DisplayBasic()
{
	std::cout << std::setw(15);
	std::cout << FirstName + "| ";
	std::cout << std::setw(14);
	std::cout << LastName + "| ";
	std::cout << std::setw(13);
	std::cout << NickName + "| ";
}

void	Contact::DisplayContact()
{
	std::cout << std::setw(15);
	std::cout << FirstName + "| ";
	std::cout << std::setw(14);
	std::cout << LastName + "| ";
	std::cout << std::setw(13);
	std::cout << NickName + "| ";
	std::cout << std::setw(15);
	std::cout << PhoneNumber + "| ";
	std::cout << std::setw(18);
	std::cout << DarkestSecret + "|";
}

void	Contact::ClearContact()
{
	FirstName.clear();
	LastName.clear();
	NickName.clear();
	PhoneNumber.clear();
	DarkestSecret.clear();
}

void	Contact::FillInfo()
{
	std::string	temp;

	std::cout << "Set First Name : ";
	std::getline(std::cin, temp);
	SizeCheck(temp, &FirstName);
	std::cout << "Set Last Name : ";
	std::getline(std::cin, temp);
	SizeCheck(temp, &LastName);
	std::cout << "Set NickName : ";
	std::getline(std::cin, temp);
	SizeCheck(temp, &NickName);
	std::cout << "Set Phone Number : ";
	std::getline(std::cin, temp);
	SizeCheck(temp, &PhoneNumber);
	std::cout << "Set Darkest Secret: ";
	std::getline(std::cin, temp);
	SizeCheck(temp, &DarkestSecret);
	std::cout << "Type something : "; 
}

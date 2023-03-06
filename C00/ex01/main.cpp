/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:00:22 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/13 15:43:25 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	FindContact(std::string argument, PhoneBook list)
{
	if (argument == "1")
		list.GetContact(0);
	else if (argument == "2")
		list.GetContact(1);
	else if (argument == "3")
		list.GetContact(2);
	else if (argument == "4")
		list.GetContact(3);
	else if (argument == "5")
		list.GetContact(4);
	else if (argument == "6")
		list.GetContact(5);
	else if (argument == "7")
		list.GetContact(6);
	else if (argument == "8")
		list.GetContact(7);
	else
		std::cout << "Invalid argument" << std::endl << "Type something: ";
}

int main()
{
	int			index;
	int			amount;
	PhoneBook	list;
	std::string	argument;

	index = 0;
	amount = 0;
	std::cout << "Type something: "; 
	while (std::getline(std::cin, argument))
	{
		if (argument == "EXIT")
			return (0);
		else if (argument == "ADD")
		{
			list.FillList(index++);
			if (amount < 8)
				amount++;
			if (index == 8)
				index = 0;
		}
		else if (argument == "SEARCH")
		{
			if (amount == 0)
			{
				std::cout << "Repertory is empty" << std::endl;
				std::cout << "Type something: ";
			}
			else
			{
				list.GetAll(amount);
				std::cout << "Who are you looking for? ";
				std::getline(std::cin, argument);
				FindContact(argument, list);
				argument.clear();
			}
		}
		else
			std::cout << "Type something correct: ";
	}
}

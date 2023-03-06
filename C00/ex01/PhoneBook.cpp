/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:57:06 by eavilov           #+#    #+#             */
/*   Updated: 2023/02/13 14:15:19 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::FillList(int index)
{
	list[index].ClearContact();
	list[index].FillInfo();
}

void	PhoneBook::GetAll(int limit)
{
	int	index;

	index = 0;
	std::cout << "0 | -First name- | -Last name- | -Nickname- |" << std::endl;
	while (index < limit)
	{
		std::cout << index + 1 <<  " | ";
		list[index].DisplayBasic();
		std::cout << std::endl;
		index++;
	}
}

void	PhoneBook::GetContact(int index)
{
	std::cout << "0 | -First name- | -Last name- | -Nickname- | -Phone Numb- | -Darkest Secret- |" << std::endl;
	if (index > 7)
		index = 0;
	std::cout << index + 1 << " | ";
	list[index].DisplayContact();
	std::cout << std::endl << "Type something: ";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:53:56 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/10 14:53:56 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	std::string message;
	int			i;

	i = 0;
	if (av[1])
		message = av[1];
	if (ac == 1 || message.empty())
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (av[++i])
	{
		message = av[i];
		std::transform(message.begin(), message.end(), message.begin(), ::toupper);
		std::cout << message;
	}
	std::cout << std::endl;
}

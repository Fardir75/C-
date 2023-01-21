/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:47:53 by eavilov           #+#    #+#             */
/*   Updated: 2023/01/13 19:00:12 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string MyDirtyLittleStringUwU = "HI THIS IS BRAIN";
	std::string *stringPTR = &MyDirtyLittleStringUwU;
	std::string stringREF = MyDirtyLittleStringUwU;

	std::cout << &MyDirtyLittleStringUwU << std::endl;
	std::cout << &*stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << MyDirtyLittleStringUwU << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}

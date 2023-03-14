/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:18:07 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/11 10:38:48 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	isMachin(char c)
{
	std::string	operators("+-*/");
	for (size_t i = 0; i<operators.size(); i++)
		if (operators[i] == c)
			return c;
	return false;
}

bool	isNum(char c)
{
	if ((c <= '9' && c >= '0'))
		return true;
	return false;
}

bool	isInvalid(char c)
{
	if (c != ' ')
		return true;
	return false;
}

bool	isValid(std::string argument)
{
	int		operators = 0;
	int		numbers = 0;
	
	for (size_t i = 0; i < argument.size(); i++)
	{
		if (isNum(argument[i]))
			numbers++;
		else if (isMachin(argument[i]))
			operators++;
	}
	if (numbers == (operators + 1))
		return true;
	return false;
}

bool	myError(const char *message, char c)
{
	std::cout << "Error: " << message;
	if (c)
		std::cout << " (" << c << ")";
	std::cout << std::endl;
	return true;
}

void	RPN(std::stack <int> *myStack, char c)
{
	int	n1 = 0;
	int	n2 = 0;
	if (myStack->size() < 2)
		return ;
	if (c == '+')
		{
			n1 = myStack->top();
			myStack->pop();
			n2 = myStack->top();
			myStack->pop();
			myStack->push(n2 + n1);
		}
		else if (c == '-')
		{
			n1 = myStack->top();
			myStack->pop();
			n2 = myStack->top();
			myStack->pop();
			myStack->push(n2 - n1); 	
		}
		else if (c == '*')
		{
			n1 = myStack->top();
			myStack->pop();
			n2 = myStack->top();
			myStack->pop();
			myStack->push(n2 * n1);
		}
		else if (c == '/')
		{
			n1 = myStack->top();
			myStack->pop();
			n2 = myStack->top();
			myStack->pop();
			myStack->push(n2 / n1);
		}
}

int main(int ac, char **av)
{
	std::stack	<int>	myStack;
	if (ac == 2)
	{
		std::string	argv = av[1];
		if (!isValid(argv))
			return (myError("Not enough operators/numbers", 0));
		for (size_t i = 0; i < argv.size(); i++)
		{
			if (isNum(argv[i]))
				myStack.push(argv[i] - '0');
			else if (isMachin(argv[i]))
				RPN(&myStack, argv[i]);
			else if (isInvalid(argv[i]))
				return (myError("Invalid character", argv[i]));
		}
		std::cout << myStack.top() << std::endl;
	}
	else
		return (myError("Argument empty", 0));
}

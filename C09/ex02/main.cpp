/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eavilov <eavilov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:39:01 by eavilov           #+#    #+#             */
/*   Updated: 2023/03/12 15:12:16 by eavilov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::deque<int>	dSort(std::deque<int> dArray)
{
	if (dArray.size() > 1)
	{
		size_t	mid = dArray.size() / 2;
		std::deque<int>	left(dArray.begin(), dArray.begin() + mid);
		std::deque<int>	right(dArray.begin() + mid, dArray.begin() + dArray.size());

		left = dSort(left);
		right = dSort(right);
		size_t index = 0;
		size_t i1 = 0;
		size_t i2 = 0;
		while (i1 < left.size() && i2 < right.size())
		{
			if (left[i1] < right[i2])
				dArray[index] = left[i1++];
			else
				dArray[index] = right[i2++];
			index++;
		}
		while (i1 < left.size())
			dArray[index++] = left[i1++];
		while (i2 < right.size())
			dArray[index++] = right[i2++];
	}
	return dArray;
}

std::vector<int>	vSort(std::vector<int> dArray)
{
	if (dArray.size() > 1)
	{
		size_t	mid = dArray.size() / 2;
		std::vector<int>	left(dArray.begin(), dArray.begin() + mid);
		std::vector<int>	right(dArray.begin() + mid, dArray.begin() + dArray.size());

		left = vSort(left);
		right = vSort(right);
		size_t index = 0;
		size_t i1 = 0;
		size_t i2 = 0;
		while (i1 < left.size() && i2 < right.size())
		{
			if (left[i1] < right[i2])
				dArray[index] = left[i1++];
			else
				dArray[index] = right[i2++];
			index++;
		}
		while (i1 < left.size())
			dArray[index++] = left[i1++];
		while (i2 < right.size())
			dArray[index++] = right[i2++];
	}
	return dArray;
}

int main(int ac, char **av)
{
	std::deque <int>	dArray;
	std::vector <int>	vArray;
	clock_t start, end;

	if (ac < 3)
		return (myError("not enough arguments"));
	if (myParsing(&av[1]))
		return (myError("incorrect character"));
	start = clock();
	fillVector(&vArray, &av[1]);
	std::cout << "Before: ";
	displayArray(vArray);
	vArray = vSort(vArray);
	end = clock();
	std::cout << "After: ";
	displayArray(vArray);
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << vArray.size() << " elements with std::vector : " << (static_cast<float>(end - start)*0.0001) << " us" << std::endl;
	start = clock();
	fillDeque(&dArray, &av[1]);
	dArray = dSort(dArray);
	end = clock();
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << vArray.size() << " elements with std::deque : " << (static_cast<float>(end - start)*0.0001) << " us" << std::endl;
	return 0;
}

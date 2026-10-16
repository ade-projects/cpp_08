/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:39:13 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/16 12:28:54 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main(void)
{
	std::cout << "\n- Testing with vector container: - \n" << std::endl;

	std::vector<int> vec;
	vec.push_back(23);
	vec.push_back(42);
	vec.push_back(76);
	vec.push_back(42);
	vec.push_back(58);

	std::cout << "Vector content:" << std::endl;
	for (size_t i = 0; i < vec.size(); ++i)
	{
		std::cout << " - " << vec[i] << " with address: " << &vec[i] << std::endl;
	}

	std::cout << "Searching first occurence of existing value: " << std::endl;
	try
	{
		std::vector<int>::iterator it;
		it = easyfind(vec, 42);
		std::cout << " - First value found in vector: " << *it << " with address: " << &*it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << " - Error: " << e.what() << std::endl;
	}

	std::cout << "Searching nonexistent value: " << std::endl;
	try
	{
		std::vector<int>::iterator it;
		it = easyfind(vec, 55);
		std::cout << " - Value found in vector: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << " - Error: " << e.what() << std::endl;
	}

	std::cout << "\n- Testing with list container: - \n" << std::endl;

	std::list<int> lst;
	lst.push_back(23);
	lst.push_back(42);
	lst.push_back(76);
	lst.push_back(42);
	lst.push_back(58);

	std::cout << "List content:" << std::endl;
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
	{
		std::cout << " - " << *it << " with address: " << &(*it) << std::endl;
	}

	std::cout << "Searching first occurence of existing value: " << std::endl;
	try
	{
		std::list<int>::iterator it;
		it = easyfind(lst, 42);
		std::cout << " - First value found in list: " << *it << " with address: " << &*it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << " - Error: " << e.what() << std::endl;
	}

	std::cout << "Searching nonexistent value: " << std::endl;
	try
	{
		std::list<int>::iterator it;
		it = easyfind(lst, 55);
		std::cout << " - Value found in list: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << " - Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	return (0);
}

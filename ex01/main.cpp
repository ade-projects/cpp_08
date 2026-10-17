/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:33:22 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/17 14:32:20 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int	main(void)
{
	std::cout << "\n - Testing from subject: -" << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << "\n - Testing short range: -" << std::endl;
	{
		Span littleSpan(42);
		std::vector<int> randomValues;
		for (int i = 0; i < 42; ++i)
		{
			randomValues.push_back((i + 2) * 3);
			std::cout << randomValues[i] << " ";
		}
		std::cout << std::endl;
		littleSpan.addNumber(randomValues.begin(), randomValues.end());

		std::cout << "Shortest span: " << littleSpan.shortestSpan() << std::endl;
		std::cout << "Longest span: " << littleSpan.longestSpan() << std::endl;
	}

	std::cout << "\n - Testing large range: -" << std::endl;
	{
		Span largeSpan(12345);
		std::vector<int> randomValues;
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		for (int i = 0; i < 12345; ++i)
		{
			randomValues.push_back(std::rand());
			std::cout << randomValues[i] << " ";
		}
		std::cout << std::endl;
		largeSpan.addNumber(randomValues.begin(), randomValues.end());
		
		std::cout << "Shortest span: " << largeSpan.shortestSpan() << std::endl;
		std::cout << "Longest span: " << largeSpan.longestSpan() << std::endl;
	}

	std::cout << "\n - Testing exceptions: -\n" << std::endl;
	{
		Span exSpan(3);
		std::cout << "- shortest on empty: " << std::endl;
		try
		{
			exSpan.shortestSpan();
		}
		catch (const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << "- longest on empty: " << std::endl;
		try
		{
			exSpan.longestSpan();
		}
		catch (const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		exSpan.addNumber(42);
		exSpan.addNumber(10);
		exSpan.addNumber(50);
		
		std::cout << "- adding elements when full: " << std::endl;
		try
		{
			exSpan.addNumber(123);
		}
		catch (const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}

	return (0);
}

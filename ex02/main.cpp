/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:51:24 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/18 15:11:50 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <string>

int	main(void)
{
	std::cout << "\n - Testing from subject: -\n" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "Element on top: " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Size of stack is: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;

		std::cout << "Elements in mstack:" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);

		std::cout << std::endl;
		std::cout << "Original mstack size: " << mstack.size() << std::endl;
		std::cout << "Copied stack s size: " << s.size() << std::endl;
		std::cout << "Element on top of s: " << s.top() << std::endl;
		std::cout << "Elements in s:" << std::endl;
		while (!s.empty())
		{
			std::cout << s.top() << " ";
			s.pop();
		}
		std::cout << std::endl;
		std::cout << "After popping size of stack s is now: " << s.size() << std::endl;
	
		std::cout << "and size of mstack is: " << mstack.size() << std::endl;
	}

	std::cout << "\n - Testing strings and reverse iterators: -\n" << std::endl;
	{
		MutantStack<std::string> strStack;

		strStack.push("First");
		strStack.push("Second");
		strStack.push("Third");

		std::cout << "Forward iteration:" << std::endl;
		for (MutantStack<std::string>::iterator it = strStack.begin(); it != strStack.end(); ++it)
		{
			std::cout << " - " << *it << std::endl;
		}
		std::cout << "Reverse iteration:" << std::endl;
		for (MutantStack<std::string>::reverse_iterator rit = strStack.rbegin(); rit != strStack.rend(); ++rit)
		{
			std::cout << " - " << *rit << std::endl;
		}
	}

	std::cout << "\n - Testing doubles, const stack and const iterators: -\n" << std::endl;
	{
		MutantStack<double> dStack;

		dStack.push(3.14);
		dStack.push(0.42);
		dStack.push(42.01);

		const MutantStack<double> constStack(dStack);

		std::cout << "Const stack elements:" << std::endl;
		for (MutantStack<double>::const_iterator cit = constStack.begin(); cit != constStack.end(); ++cit)
		{
			std::cout << " - " << *cit << std::endl;
		}
	}

	return (0);
}

*This project has been created as part of the 42 curriculum by adeestev.*

## Description
C++ Module 08 introduces the Standard Template Library (STL) within the C++98 standard. This module shifts the focus to highly efficient data management using STL containers, iterators, and algorithms. It emphasizes the practical application of these tools to store, search, and manipulate data structures elegantly, avoiding manual memory loops and reinventing the wheel.

## Exercises Overview

* **Exercise 00: Easy find**
Requires the implementation of a function template easyfind(T& container, int value). The function utilizes STL algorithms (specifically std::find) and iterators to locate the first occurrence of an integer within any standard STL container, throwing a custom exception if the value is not found.

* **Exercise 01: Span**
Focuses on advanced container manipulation. It implements a Span class capable of storing a maximum of N integers. The class features methods to calculate the shortest and longest spans (distances) between any two stored numbers. It also requires an optimized addNumber() variant that utilizes iterator ranges to efficiently insert multiple numbers at once.

* **Exercise 02: Mutated abomination**
Explores the inner workings of STL container adapters. Since the standard std::stack does not support iterators by default, this exercise requires creating a MutantStack class. By inheriting from std::stack and exposing the iterators of its underlying container, the class bridges the gap, allowing for standard, sequential iteration through a stack's elements.

## Instructions

Each exercise is located within its own directory (ex00 to ex02) and must be compiled independently.

* **Compiler:** c++

* **Compilation Flags:** -Wall -Wextra -Werror -std=c++98

* **Execution:** Navigate to the respective directory and run make to build the executable. Run the generated binary to observe the container behaviors and algorithm outputs.

## Resources

* **Documentation:** C++98 standard references for the Standard Template Library (STL), specifically algorithm, vector, list and stack.

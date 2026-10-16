/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:40:18 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/16 18:11:31 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <stdexcept>
#include <limits>

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& src) : _maxSize(src._maxSize), _nbrs(src._nbrs) {}

Span& Span::operator=(const Span& src)
{
	if (this != &src)
	{
		_maxSize = src._maxSize;
		_nbrs = src._nbrs;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int nbr)
{
	if (_nbrs.size() >= _maxSize)
	{
		throw std::out_of_range("Span is already full.\n");
	}
	_nbrs.push_back(nbr);
}

int Span::shortestSpan() const
{
	if (_nbrs.size() <= 1)
	{
		throw std::logic_error("Not enough elements to calculate.\n");
	}
	std::vector<int> sorted = _nbrs;
	std::sort(sorted.begin(), sorted.end());
	int minSpan = std::numeric_limits<int>::max();

	for (size_t i = 0; i < sorted.size() - 1; ++i)
	{
		int diff = sorted[i + 1] - sorted[i];
		if (diff < minSpan)
			minSpan = diff;
	}

	return (minSpan);
}

int Span::longestSpan() const
{
	if (_nbrs.size() <= 1)
	{
		throw std::logic_error("Not enough elements to calculate.\n");
	}
	std::vector<int>::const_iterator minIter = std::min_element(_nbrs.begin(), _nbrs.end());
	std::vector<int>::const_iterator maxIter = std::max_element(_nbrs.begin(), _nbrs.end());

	return (*maxIter - *minIter);
}

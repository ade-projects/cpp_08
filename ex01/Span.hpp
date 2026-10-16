/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:40:37 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/16 18:11:33 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <exception>
# include <stdexcept>
# include <iterator>

class Span
{
	private:
		unsigned int		_maxSize;
		std::vector<int>	_nbrs;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& src);
		Span& operator=(const Span& src);
		~Span();

		void	addNumber(int nbr);
		int		shortestSpan() const;
		int		longestSpan() const;

		template <typename Iter>
		void addNumber(Iter begin, Iter end)
		{
			if (_nbrs.size() + std::distance(begin, end) > _maxSize)
			{
				throw std::out_of_range("Range is bigger than maximum capacity.\n");
			}
			_nbrs.insert(_nbrs.end(), begin, end);
		}
};

#endif

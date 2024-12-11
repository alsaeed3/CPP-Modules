/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:59:59 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/21 19:00:50 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <limits>
# include <map>
# include <vector>
# include <list>

class Span {

	private:
		unsigned int	_N;
		std::vector<int> _numbers;

		Span( void );

	public:
		Span( unsigned int N );
		Span( Span const &src );
		Span &operator=( Span const &src );
		~Span();

		void addNumber( int num );
		
		unsigned int shortestSpan( void ) const;
		unsigned int longestSpan( void ) const;

		void	generateNumbers(int min, int max);

		void	printNumbers() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:59:56 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/21 19:03:11 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int N ) {

	this->_N = N;

	return;
}

Span::Span( Span const &src ) {
	
	*this = src;

	return;
}

Span &Span::operator=( Span const &src ) {
	
	this->_N = src._N;
	this->_numbers = src._numbers;

	return *this;
}

Span::~Span() {
	
	return;
}


void Span::addNumber( int num ) {
	
	if ( this->_numbers.size() >= this->_N ) {

		throw std::logic_error("Span is full");
	}
	_numbers.push_back( num );

	return;
}

unsigned int Span::shortestSpan( void ) const {

	if ( _numbers.size() < 2 ) {

		throw std::logic_error("Not sufficient numbers to find a span");
	}

	std::vector<int> sortedNumbers = this->_numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	unsigned int minSpan = std::numeric_limits<unsigned int>::max();
	for ( std::size_t i = 1; i < sortedNumbers.size(); ++i ) {

		unsigned int span = sortedNumbers[i] - sortedNumbers[i - 1];
		if ( span < minSpan ) {

			minSpan = span;
		}
	}

	return minSpan;
}

unsigned int Span::longestSpan( void ) const {
	
	if ( _numbers.size() < 2 ) {

		throw std::logic_error("Not sufficient numbers to find a span");
	}

	unsigned int minElement = *std::min_element(_numbers.begin(), _numbers.end());
	unsigned int maxElement = *std::max_element(_numbers.begin(), _numbers.end());

	return maxElement - minElement;	
}

void	Span::generateNumbers( int min, int max ) {

	srand(time(NULL));
	for (unsigned int i = _numbers.size(); i < _N; i++)
	{
		_numbers.push_back(std::rand() % (max - min + 1) + min);
	}
}

void	Span::printNumbers() const {

	for (unsigned int i = 0; i < _numbers.size(); i++)
	{
		std::cout << _numbers[i] << " ";
	}
	std::cout << std::endl;
}

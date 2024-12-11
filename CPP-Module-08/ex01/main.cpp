/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:59:53 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/21 19:30:46 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ) {

	Span sp1 = Span(5);
	Span sp2 = Span(10);

	try {

		sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);

		std::cout << "shortest span sp1: " << sp1.shortestSpan() << std::endl;

		std::cout << "longest span sp1: " << sp1.longestSpan() << std::endl;
		
		sp2.generateNumbers(-1000, 1000);
		sp2.printNumbers();
		
		std::cout << "shortest span sp2: " << sp2.shortestSpan() << std::endl;

		std::cout << "longest span sp2: " << sp2.longestSpan() << std::endl;
	} catch (std::exception &e) {

		std::cout << e.what() << std::endl;
	}
	return 0;
}
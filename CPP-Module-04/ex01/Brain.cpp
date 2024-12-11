/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:33:19 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/28 16:30:56 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	
	std::cout << "Brain Constructor has been called" << std::endl;

	std::string	ideas[10] = {	"!Idea No. 1!",
								"!Idea No. 2!",
								"!Idea No. 3!",
								"!Idea No. 4!",
								"!Idea No. 5!",
								"!Idea No. 6!",
								"!Idea No. 7!",
								"!Idea No. 8!",
								"!Idea No. 9!",
								"!Idea No. 10!",	};
	
	for ( int i = 0; i < 10; i++ ) {

		this->ideas[ i ] = ideas[ i ];
	}

	return;
}

Brain::Brain( const Brain& source_object ) {
	
	std::cout << "Brain Copy Constructor has been called" << std::endl;
	
	*this = source_object;

	return;
}

Brain&	Brain::operator=( const Brain& source_object ) {
	
	std::cout << "Brain Copy Assignment Operator has been called" << std::endl;
	
	if ( this != &source_object )
		for ( int i = 0; i < 10; i++ ) 
			this->ideas[ i ] = source_object.ideas[ i ];

	return *this;
}

Brain::~Brain( void ) {
	
	std::cout << "Brain Destructor has been called" << std::endl;

	return;
}

std::string*	Brain::getIdeas( void ) {
	
	return this->ideas;
}

void			Brain::setIdeas( std::string* ideas ) {

	for ( int i = 0; i < 10; i++ ) {

		this->ideas[ i ] = ideas[ i ];
	}

	return;
}

void			Brain::printIdeas( void ) const {

	for ( int i = 0; i < 10; i++ ) {

		std::cout << this->ideas[ i ] << std::endl;
	}

	return;
}

void			Brain::resetIdeas( void ) {

	for (int i = 0; i < 10; i++ ) {

		this->ideas[ i ] = "No Idea";
	}

	return;
}

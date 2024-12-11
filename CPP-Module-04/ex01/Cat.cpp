/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:17:35 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/28 16:29:54 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ), _brain( new Brain() ) {

	std::cout << "Cat Constructor has been called" << std::endl;

	return;	
}

Cat::Cat( const Cat& source_object ) : Animal( "Cat" ) {

	std::cout << "Cat Copy Constructor has been called" << std::endl;

	*this = source_object;

	return;	
}

Cat&	Cat::operator=( const Cat& source_object ) {

	std::cout << "Cat Copy Assignment Operator has been called" << std::endl;

	if ( this != &source_object ) {
		
		this->_type = source_object._type;
		this->_brain = new Brain();
		this->_brain->setIdeas(source_object._brain->getIdeas());
	}

	return *this;	
}

Cat::~Cat( void ) {

	std::cout << "Cat Destructor has been called" << std::endl;
	
	delete this->_brain;
	
	return;	
}

void	Cat::makeSound( void ) const {

	std::cout << "Meowww!!!" << std::endl;

	return;	
}

Brain*	Cat::getBrain( void ) const {
	
	return this->_brain;
}

void	Cat::changeIdea( int i, std::string idea ) {

	this->_brain->ideas[ i ] = idea;

	return;
}

std::string	Cat::getIdea( int i ) const {

	return this->_brain->ideas[i];
}
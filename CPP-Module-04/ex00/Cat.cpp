/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:17:35 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 21:40:20 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {

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

	if ( this != &source_object )
		this->_type = source_object._type;

	return *this;	
}

Cat::~Cat( void ) {

	std::cout << "Cat Destructor has been called" << std::endl;

	return;	
}

void	Cat::makeSound( void ) const {

	std::cout << "Meowww!!!" << std::endl;

	return;	
}

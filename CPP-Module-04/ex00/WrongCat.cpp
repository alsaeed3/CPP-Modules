/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:00:44 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 21:40:36 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" ) {

	std::cout << "WrongCat Constructor has been called" << std::endl;

	return;	
}

WrongCat::WrongCat( const WrongCat& source ) : WrongAnimal( "WrongCat" ) {

	std::cout << "WrongCat Copy Constructor has been called" << std::endl;

	*this = source;

	return;	
}

WrongCat&	WrongCat::operator=( const WrongCat& source ) {

	std::cout << "WrongCat Copy Assignment Operator has been called" << std::endl;

	if ( this != &source )
		this->_type = source._type;

	return *this;	
}

WrongCat::~WrongCat( void ) {

	std::cout << "WrongCat Destructor has been called" << std::endl;

	return;	
}

void	WrongCat::makeSound( void ) const {

	std::cout << "Meowww!!!" << std::endl;

	return;	
}

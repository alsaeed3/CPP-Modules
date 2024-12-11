/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 19:17:45 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/23 23:58:54 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {

	std::cout << "DEFAULT ScavTrap Constructor has been called" << std::endl;

	return;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {

	this->setHp( 100 );
	this->setEp( 50 );
	this->setAd( 20 );
	
	std::cout << this->getName() << " ScavTrap Constructor has been called" << std::endl;

	return;	
}

ScavTrap::ScavTrap( const ScavTrap& source ) : ClapTrap() {

	std::cout << "ScavTrap Copy Constructor has been called" << std::endl;
	*this = source;

	return;	
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& source ) {

	std::cout << "ScavTrap Copy Assignment Operator has been called" << std::endl;

	if ( this != &source) {

		this->setName( source.getName() );
		this->setHp( source.getHp() );
		this->setEp( source.getEp() );
		this->setAd( source.getAd() );
	}

	return *this;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap Destructor has been called" << std::endl;

	return;	
}

/*********************************************************************************************/
/*									Member Functions										 */
/*********************************************************************************************/
void	ScavTrap::attack( const std::string& target ) {

	if ( this->getHp() <= 0 ) {
		
		std::cout << "ScavTrap " << this->getName() << " can't attack, it's dead!!" << std::endl;
		return;
	}

	if ( this->getEp() <= 0 ) {
		
		std::cout << "ScavTrap " << this->getName() << " has No Energy left to attack!!" << std::endl;
		return;
	}

	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAd() << " points of damage!" << std::endl;

	this->setEp( this->getEp() - 1 );

	if ( this->getEp() <= 0 )
		std::cout << "Warning: " << this->getName() << " ScavTrap has exhausted all its Energy in the Attack" << std::endl;

	return;	
}

void	ScavTrap::guardGate( void ) {

	std::cout << this->getName() << " ScavTrap is now in Gate keeper mode" << std::endl;

	return;	
}

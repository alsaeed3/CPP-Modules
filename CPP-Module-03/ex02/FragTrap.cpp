/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 00:01:25 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/24 00:20:00 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	
	std::cout << "DEFAULT FragTrap Constructor has been called" << std::endl;

	return;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	
	this->setHp( 100 );
	this->setEp( 100 );
	this->setAd( 30 );
	
	std::cout << this->getName() << " FragTrap Constructor has been called" << std::endl;

	return;
}

FragTrap::FragTrap( const FragTrap& source ) : ClapTrap() {
	
	std::cout << "FragTrap Copy Constructor has been called" << std::endl;
	*this = source;

	return;
}

FragTrap&	FragTrap::operator=( const FragTrap& source ) {
	
	std::cout << "FragTrap Copy Assignment Operator has been called" << std::endl;

	if ( this != &source) {

		this->setName( source.getName() );
		this->setHp( source.getHp() );
		this->setEp( source.getEp() );
		this->setAd( source.getAd() );
	}

	return *this;
}

FragTrap::~FragTrap( void ) {
	
	std::cout << "FragTrap Destructor has been called" << std::endl;

	return;
}

void	FragTrap::attack( const std::string& target ) {
	
	if ( this->getHp() <= 0 ) {
		
		std::cout << "FragTrap " << this->getName() << " can't attack, it's dead!!" << std::endl;
		return;
	}

	if ( this->getEp() <= 0 ) {
		
		std::cout << "FragTrap " << this->getName() << " has No Energy left to attack!!" << std::endl;
		return;
	}

	std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAd() << " points of damage!" << std::endl;

	this->setEp( this->getEp() - 1 );

	if ( this->getEp() <= 0 )
		std::cout << "Warning: " << this->getName() << " FragTrap has exhausted all its Energy in the Attack" << std::endl;

	return;
}

void	FragTrap::highFiveGuys( void ) {

	std::cout << this->getName() << " FragTrap: High Five Guys!!" << std::endl;

	return;
}

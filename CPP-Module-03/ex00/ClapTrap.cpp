/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:20:52 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 14:59:44 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*********************************************************************************************/
/*								Orthodox Canonical Form										 */
/*********************************************************************************************/
ClapTrap::ClapTrap( void ) 
	: _name( "DEFAULT" ), _hp( 10 ), _ep( 10 ), _ad( 0 ) {

	std::cout << "DEFAULT ClapTrap Constructor has been called" << std::endl;

	return;
}

ClapTrap::ClapTrap( std::string name ) 
	: _name( name ), _hp( 10 ), _ep( 10 ), _ad( 0 ) {

	std::cout << this->getName() << " ClapTrap Constructor has been called" << std::endl;

	return;
}

ClapTrap::ClapTrap( const ClapTrap& source ) {

	*this = source;
	
	std::cout << this->getName() << " ClapTrap Copy Constructor has been called" << std::endl;

	return;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << this->getName() << " ClapTrap Destructor has been called" << std::endl;

	return;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& source ) {

	std::cout << "ClapTrap Copy Assignment Operator has been called" << std::endl;
	
	if ( this != &source ) {

		this->_name = source.getName();
		this->_hp = source.getHp();
		this->_ep = source.getEp();
		this->_ad = source.getAd();
	}

	return *this;
}

/*********************************************************************************************/
/*									Getter Functions										 */
/*********************************************************************************************/
std::string		ClapTrap::getName( void ) const {
	
	return this->_name;
}

unsigned int	ClapTrap::getHp( void ) const {

	return this->_hp;
}

unsigned int	ClapTrap::getEp( void ) const {

	return this->_ep;
}

unsigned int	ClapTrap::getAd( void ) const {

	return this->_ad;
}

void			ClapTrap::setName( std::string name ){

	this->_name = name;

	return;	
}

void			ClapTrap::setHp( unsigned int hp ) {

	this->_hp = hp;
	
	return;	
}

void			ClapTrap::setEp( unsigned int ep ) {

	this->_ep = ep;
	
	return;	
}

void			ClapTrap::setAd( unsigned int ad ) {

	this->_ad = ad;

	return;	
}

/*********************************************************************************************/
/*									Member Functions										 */
/*********************************************************************************************/
void		ClapTrap::attack( const std::string &target ) {

	if ( this->_ep <= 0 ) {
		
		std::cout << "ClapTrap " << this->getName() << " has No Energy left to attack!!" << std::endl;
		return;
	}
	
	if ( this->_hp <= 0 ) {
		
		std::cout << "ClapTrap " << this->getName() << " can't attack, it's dead!!" << std::endl;
		return;
	}
	
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAd() << " points of damage!" << std::endl;
	
	this->_ep -= 1;
	
	if ( this->_ep <= 0 )
		std::cout << "Warning: " << this->getName() << " ClapTrap has exhausted all its Energy in the Attack" << std::endl;

	return;
}

void		ClapTrap::takeDamage( unsigned int amount ) {

	if ( this->_hp <= 0 ) {

		std::cout << "ClapTrap " << this->getName() << " can't take damage, it's already dead!!" << std::endl;
		return;
	}
	
	if ( amount >= this->_hp ) {

		std::cout << "ClapTrap " << this->getName() << " has received a fatal attack, it's dead now!!" << std::endl;
		this->_hp = 0;
		return;
	}
	
	this->_hp -= amount;
	
	std::cout << "ClapTrap " << this->getName() << " has been attacked, receiving " << amount << " damage, its remaining HP is " << this->getHp() << std::endl;
	
	return;
}
void		ClapTrap::beRepaired( unsigned int amount ) {

	if ( this->_hp <= 0 ) {

		std::cout << "ClapTrap " << this->getName() << " can't be repaired, it's already dead!!" << std::endl;
		return;
	}
	
	if ( this->_ep <= 0 ) {

		std::cout << "ClapTrap " << this->getName() << " has No Energy left to repair!!" << std::endl;
		return;
	}

	this->_hp += amount;

	std::cout << "ClapTrap " << this->getName() << " has repaired itself by " << amount << " HP, its current HP is " << this->getHp() << std::endl;
	
	this->_ep -= 1;
	
	if ( this->_ep <= 0 )
		std::cout << "Warning: " << this->getName() << " ClapTrap has exhausted all its Energy in the Repair" << std::endl;
	
	return;
}
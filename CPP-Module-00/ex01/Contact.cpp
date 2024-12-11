/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:07:46 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/07 00:19:42 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*							Constructor							*/
Contact::Contact( void ) {
	
	return;
}

/*							Destructor							*/
Contact::~Contact( void ) {
	
	return;
}

/*					GETTER FUNCTIONS PROTOTYPES					*/
/*	A clean way to access the private class attributes members	*/
std::string		Contact::getFirstName( void ) const {

	return (this->_firstName);
}

std::string		Contact::getLastName( void ) const {

	return (this->_lastName);
}

std::string		Contact::getNickname( void ) const {

	return (this->_nickname);
}

std::string		Contact::getPhoneNumber( void ) const {

	return (this->_phoneNumber);
}

std::string		Contact::getDarkestSecret( void ) const {

	return (this->_darkestSecret);
}

/*					SETTER FUNCTIONS PROTOTYPES					*/
/*	A clean way to assign the private class attributes members	*/
void			Contact::setFirstName( std::string firstName ) {

	this->_firstName = firstName;
	return;
}

void			Contact::setLastName( std::string lastName ) {

	this->_lastName = lastName;
	return;
}

void			Contact::setNickname( std::string nickname ) {

	this->_nickname = nickname;
	return;
}

void			Contact::setPhoneNumber( std::string phoneNumber ) {
	
	this->_phoneNumber = phoneNumber;
	return;
}

void			Contact::setDarkestSecret( std::string darkestSecret ) {

	this->_darkestSecret = darkestSecret;
	return;
}

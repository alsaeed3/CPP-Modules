/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:07:55 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/07 00:30:44 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

/****************************************************************************/
/*			    		Constructor of the class	 						*/
/****************************************************************************/
PhoneBook::PhoneBook( void ) {

	this->welcomeMessage();    
	return;
}

/****************************************************************************/
/*			    		Destructor of the class	 							*/
/****************************************************************************/
PhoneBook::~PhoneBook( void ) {

	return;
}

/****************************************************************************/
/*		A function that displays introduction message for the program		*/
/****************************************************************************/
void        PhoneBook::welcomeMessage( void ) const {
	
	std::cout << std::endl;
	std::cout << " Welcome to Crappy Awesome PhoneBook Software " << std::endl;
	std::cout << std::endl;
	std::cout << " ================COMMANDS================= " << std::endl;
	std::cout << std::endl;
	std::cout << "ADD\t: save a new contact" << std::endl;
	std::cout << std::endl;
	std::cout << "SEARCH\t: display a specific contact" << std::endl;
	std::cout << std::endl;
	std::cout << "EXIT\t: Program quits and data are lost!" << std::endl;
	std::cout << std::endl;
	std::cout << " ========================================== " << std::endl;
	std::cout << std::endl;

	return;
}

/****************************************************************************/
/*					ADD command function and utils							*/
/****************************************************************************/
bool			PhoneBook::stringIsAlpha( std::string contactData ) const {
	
	for ( int i = 0; contactData[ i ]; i++ ) {

		if ( !( std::isalpha( contactData[ i ] ) ) ) {
			
			std::cout << "Invalid entry" << std::endl;
			return false;
		}
	}
	return true;
}

bool			PhoneBook::isPhoneNumber( std::string contactData ) const {
	
	for ( int i = 0; contactData[ i ]; i++ ) {

		if ( i == 0 && contactData[ 0 ] == '+' )
			continue;
		
		if ( !( std::isdigit(contactData[ i ] ) ) ) {
			
			std::cout << "Invalid phone number" << std::endl;
			return false;
		}
	}

	return true;
}


std::string		PhoneBook::parseContactData( std::string contactField ) const {

	std::string		contactData;
	bool			validData = false;

	while ( validData == false ) {

		std::cout << std::endl;
		std::cout << contactField;
		std::getline( std::cin, contactData );

		if ( std::cin.eof() ) {
	
			std::cout << "EOF. Exiting PhoneBook..." << std::endl;
			std::exit( 1 );
		}
		
		if ( !contactData[ 0 ] ) {
			
			std::cout << "You have entered nothing. Please try again..." << std::endl;
			continue;
		}

		if ( contactField == "Enter Phone Number: " )
			validData = this->isPhoneNumber( contactData );
		else
			validData = this->stringIsAlpha( contactData );
	}

	return contactData;
}

void			PhoneBook::addCommand( int& contactOrder ) {

	std::string firstName = this->parseContactData( "Enter First Name: " );
	this->_contacts[ contactOrder % 8 ].setFirstName( firstName );

	std::string lastName = this->parseContactData( "Enter Last Name: " );
	this->_contacts[ contactOrder % 8 ].setLastName( lastName );

	std::string nickname = this->parseContactData( "Enter Nickname: " );
	this->_contacts[ contactOrder % 8 ].setNickname( nickname );

	std::string phoneNumber = this->parseContactData( "Enter Phone Number: " );
	this->_contacts[ contactOrder % 8 ].setPhoneNumber( phoneNumber );

	std::string darkestSecret = this->parseContactData( "Enter Darkest Secret: " );
	this->_contacts[ contactOrder % 8 ].setDarkestSecret( darkestSecret );
	
	std::cout << std::endl;
	std::cout << "The contact has been added to PhoneBook successfully" << std::endl;
	contactOrder += 1;

	return;
}

/****************************************************************************/
/*					SEARCH command function and utils						*/
/****************************************************************************/
void		    PhoneBook::searchCommand( void ) const {

	bool	validConatctIndex = false;

	if ( this->displayAllContacts() == true )
		return;

	while ( validConatctIndex == false ) {

		int	contactIndex = this->findContactIndex();

		if ( this->_contacts[ contactIndex ].getFirstName().empty() == true ) {
			
			std::cout << "Invalid contact index. Please enter an existing contact index..." << std::endl;
			continue;
		}

		validConatctIndex = true;
		this->displayFullContactInfo( contactIndex );
	}

	return;

}
bool			PhoneBook::displayAllContacts( void ) const {

	if ( this->_contacts[ 0 ].getFirstName().empty() == true ) {
		
		std::cout << "The PhoneBook has no contacts yet!" << std::endl;
		return true;
	}

	std::cout << " =========================================== " << std::endl;
	std::cout << "|   Index  |" << "First Name|" << " Last Name|" << " Nickname |" << std::endl;
	std::cout << " =========================================== " << std::endl;

	for ( int contactIndex = 0; contactIndex < 8; contactIndex++ ) {
	
		if ( this->_contacts[ contactIndex ].getFirstName().empty() == true )
			break;
		this->displayContactInfo( contactIndex );
	}

	return false;	
}

int				PhoneBook::findContactIndex( void ) const {
	
	bool			validContactIndex = false;
	std::string		contactIndex;
	
	while ( validContactIndex == false ) {

		std::cout << "Enter contact index: ";
		std::getline( std::cin, contactIndex );
		
		if ( std::cin.eof() ) {

			std::cout << "EOF. Exiting PhoneBook..." << std::endl;
			std::exit(0);
		}

		if ( contactIndex.length() > 1 || !( std::isdigit( contactIndex[ 0 ] ) ) \
		|| ( contactIndex[ 0 ] - 48 ) < 0 || ( contactIndex[ 0 ] - 48 ) > 7 ) {
			
			std::cout << "Invalid contact index. Please enter an exiting contact index..." << std::endl;
			continue;
		}
	
		validContactIndex = true;
	}

	return (contactIndex[0] - 48);
}

std::string		PhoneBook::checkFieldLength( std::string contactField ) const {
	
	if ( contactField.length() > 9 )
		return contactField.substr( 0, 8 ) + ".";

	return contactField;
}

/* A function that displays only the contact index, first, last, nick names */
void			PhoneBook::displayContactInfo( int contactIndex ) const {

	int				ci = contactIndex;
	std::string		firstName = this->checkFieldLength( this->_contacts[ ci ].getFirstName() );
	std::string		lastName = this->checkFieldLength( this->_contacts[ ci ].getLastName() );
	std::string		nickname = this->checkFieldLength (this->_contacts[ ci ].getNickname() );

	std::cout << "|";
	std::cout << std::right << std::setw( 10 ) << ci << "|";
	std::cout << std::right << std::setw( 10 ) << firstName << "|";
	std::cout << std::right << std::setw( 10 ) << lastName << "|";
	std::cout << std::right << std::setw( 10 ) << nickname << "|";
	std::cout << std::endl;
	std::cout << " =========================================== ";
	std::cout << std::endl;

	return;
}

void			PhoneBook::displayFullContactInfo( int contactIndex ) const {

	int		ci = contactIndex;

	std::cout << "╔═══════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║                         CONTACT CARD                      ║" << std::endl;
    std::cout << "╠═════════════════╦═════════════════════════════════════════╣" << std::endl;
    std::cout << "║ First Name      ║ " << std::left << std::setw( 40 ) << this->_contacts[ ci ].getFirstName() << "║" << std::endl;
    std::cout << "╠═════════════════╬═════════════════════════════════════════╣" << std::endl;
    std::cout << "║ Last Name       ║ " << std::left << std::setw( 40 ) << this->_contacts[ ci ].getLastName() << "║" << std::endl;
    std::cout << "╠═════════════════╬═════════════════════════════════════════╣" << std::endl;
    std::cout << "║ Nickname        ║ " << std::left << std::setw( 40 ) << this->_contacts[ ci ].getNickname() << "║" << std::endl;
    std::cout << "╠═════════════════╬═════════════════════════════════════════╣" << std::endl;
    std::cout << "║ Phone Number    ║ " << std::left << std::setw( 40 ) << this->_contacts[ ci ].getPhoneNumber() << "║" << std::endl;
    std::cout << "╠═════════════════╬═════════════════════════════════════════╣" << std::endl;
    std::cout << "║ Darkest secret  ║ " << std::left << std::setw( 40 ) << this->_contacts[ ci ].getDarkestSecret() << "║" << std::endl;
    std::cout << "╚═════════════════╩═════════════════════════════════════════╝" << std::endl;
	
	return;
}

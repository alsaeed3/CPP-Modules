/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:07:57 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/07 00:18:12 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class PhoneBook
{
	private:

		Contact _contacts[8];
	
	public:

		/*			    		Constructor of the class	 						*/
		PhoneBook( void );

		/*			    		Destructor of the class	 							*/
		~PhoneBook( void );

		/*		A function that displays introduction message for the program		*/
		void			welcomeMessage( void ) const;

		/*					ADD command function and utils							*/
		void			addCommand( int& contactOrder );
		bool			isPhoneNumber( std::string contactData ) const;
		bool			stringIsAlpha( std::string contactData ) const;
		std::string		parseContactData( std::string contactField ) const;

		/*					SEARCH command function and utils						*/
		void		    searchCommand( void ) const;
		bool			displayAllContacts( void ) const;
		int				findContactIndex( void ) const;
		std::string		checkFieldLength( std::string contactField ) const;
		void			displayContactInfo( int contactIndex ) const;
		void			displayFullContactInfo( int contactIndex ) const;
		
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:07:49 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/07 00:20:29 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_phoneNumber;
		std::string		_darkestSecret;
		
	public:
		
		Contact( void );
		~Contact( void );
	
		// getter function prototypes
		std::string		getFirstName( void ) const;
		std::string		getLastName( void ) const;
		std::string		getNickname( void ) const;
		std::string		getPhoneNumber( void ) const;
		std::string		getDarkestSecret( void ) const;
		
		// setter function prototypes
		void			setFirstName( std::string firstName );
		void			setLastName( std::string lastName );
		void			setNickname( std::string nickname );
		void			setPhoneNumber( std::string phoneNumber );
		void			setDarkestSecret( std::string darkestSecret );

};

#endif
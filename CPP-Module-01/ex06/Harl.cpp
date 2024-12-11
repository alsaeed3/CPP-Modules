/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:06:01 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/18 07:06:16 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {

	return;
}

Harl::~Harl( void ) {

	return;
}

void	Harl::debug( void ) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;

	return;	
}

void	Harl::info( void ) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;

	return;	
}

void	Harl::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;

	return;	
}

void	Harl::error( void ) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;

	return;	
}

void	Harl::complain( std::string level ) {

    void ( Harl::*functions[4] )( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int i;

    for ( i = 0; i < 4; i++ ) {

        if ( level == levels[i] )
            break;
    }

    switch ( i ) {

		case 0:
			( this->*functions[0] )();
		// fallthrough
		case 1:
			( this->*functions[1] )();
		// fallthrough
		case 2:
			( this->*functions[2] )();
		// fallthrough
		case 3:
			( this->*functions[3] )();
		break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

	return;
}

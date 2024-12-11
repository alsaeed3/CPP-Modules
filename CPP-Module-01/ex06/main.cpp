/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:05:46 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/17 10:22:02 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char **av ) {

	if (ac != 2) {
		
		std::cerr << "Usage: " << av[ 0 ] << " <complaint>" << std::endl;
		std::cerr << "<complaint> can be one of the following: DEBUG or INFO or WARNING or ERROR" << std::endl;
		return 1;
	}
	Harl harl;

	harl.complain( av[ 1 ] );

	return 0;	
}
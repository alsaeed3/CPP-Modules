/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:03:42 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/16 12:05:33 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FileReplacer.hpp"

int	main( int ac, char **av) {

	if ( ac != 4 ) {

		std::cerr << "Usage: " << av[0] << " <input filename> <search string> <replace string>" << std::endl;
		return 1;
	}

	FileReplacer fr(av[1], av[2], av[3]);
	if ( !fr.replaceInFile() )
		return 1;

	std::cout << "Replacements done. Check output file: " << fr.getOutputFilename() << std::endl;

	return 0;
}
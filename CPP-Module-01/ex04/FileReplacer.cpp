/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:23:01 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/16 11:08:51 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer( const std::string &inputFilename, const std::string &searchStr, const std::string &replaceStr ) : _inputFilename(inputFilename), _searchStr(searchStr), _replaceStr(replaceStr) {

	this->_outputFilename = _inputFilename + ".replace";

	return;
}

FileReplacer::~FileReplacer( void ) {

	return;
}

const std::string&	FileReplacer::getOutputFilename( void ) const {

	return _outputFilename;
}


bool	FileReplacer::replaceInFile( void ) {

	std::ifstream inputFile( _inputFilename.c_str(), std::ios_base::in );
	if ( !inputFile.is_open() ) {
		
		std::cerr << "Error: opening input file: " << _inputFilename << std::endl;
		return false;
	}

	std::ofstream outputFile( _outputFilename.c_str(), std::ios_base::out | std::ios_base::trunc );
	if ( !outputFile.is_open() ) {
		
		std::cerr << "Error: opening output file: " << _outputFilename << std::endl;
		return false;
	}

	std::string	line;
	while ( std::getline( inputFile, line ) ) {

		size_t	pos = 0;
		while ( ( pos = line.find( _searchStr, pos ) ) != std::string::npos ) {
			
			line.replace( pos, _searchStr.length(), _replaceStr );
			pos += _replaceStr.length();
		}
		outputFile << line << std::endl;
	}
	
	inputFile.close();
	outputFile.close();

	return true;
}
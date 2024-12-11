/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:13:26 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/16 11:07:59 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

# include <iostream>
# include <string>
# include <fstream>

class	FileReplacer {

	private:

		std::string	_inputFilename;
		std::string	_outputFilename;
		std::string	_searchStr;
		std::string	_replaceStr;

	public:

		FileReplacer( const std::string &inputFilename, const std::string &searchStr, const std::string &replaceStr );
		~FileReplacer( void );

		const std::string&	getOutputFilename( void ) const;
		bool	replaceInFile( void );

};

#endif
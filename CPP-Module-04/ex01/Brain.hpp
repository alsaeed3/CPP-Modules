/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:35:12 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/28 16:20:46 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Brain {

	public:
		std::string	ideas[100];

		Brain( void );
		Brain( const Brain& source_object );
		Brain&	operator=( const Brain& source_object );
		~Brain( void );

		std::string*	getIdeas( void );
		void			setIdeas( std::string* ideas );
		void			printIdeas( void ) const;
		void			resetIdeas( void );
};

#endif
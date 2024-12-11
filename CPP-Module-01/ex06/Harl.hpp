/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:06:04 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/17 10:22:17 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class	Harl {

	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );	
	
	public:

		Harl( void );
		~Harl( void );
		
		void	complain( std::string level );

};

#endif
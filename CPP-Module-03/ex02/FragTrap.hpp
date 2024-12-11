/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 00:01:14 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/24 00:21:20 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap {

	public:

		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap& source );
		FragTrap&	operator=( const FragTrap& source );
		~FragTrap( void );

		void	attack( const std::string& target );
		void	highFiveGuys( void );
};

#endif
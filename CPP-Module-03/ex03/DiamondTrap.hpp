/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:54:17 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 14:33:54 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : public FragTrap, public ScavTrap {

	private:
	
		std::string		_name;

	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& source );
		DiamondTrap&	operator=( const DiamondTrap& source );
		~DiamondTrap( void );

		void	attack( const std::string& target );
		void	whoAmI();
		void	displayStats( void ) const;
};

#endif

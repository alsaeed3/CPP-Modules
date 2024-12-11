/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 22:54:51 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/15 18:25:49 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define GREEN "\033[32m"
# define RED "\033[31m"
# define BOLD_GREEN "\033[1;32m"
# define BOLD_RED "\033[1;31m"
# define RESET "\033[0m"

class	Zombie {
	
	private:

		std::string	_name;

	public:

		Zombie( void );
		~Zombie( void );

		/* It lets zombies to announce themselves as following */
		/* <name>: BraiiiiiiinnnzzzZ... or foo: BraiiiiiiinnnzzzZ... */
		void	setName( std::string name );
		void	announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif

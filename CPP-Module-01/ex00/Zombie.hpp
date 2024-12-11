/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 03:43:38 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/15 18:26:00 by alsaeed          ###   ########.fr       */
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

		Zombie( std::string name );
		~Zombie( void );

		/* It lets zombies to announce themselves as following */
		/* <name>: BraiiiiiiinnnzzzZ... or foo: BraiiiiiiinnnzzzZ... */
		void	announce( void );

};

/* It creates a zombie, name it, and return a pointer to it, */
/* so you can use it outside of the function scope */
Zombie*	newZombie( std::string name );

/* It creates a zombie, name it, and the zombie announces itself */
void	randomChump( std::string name );

#endif
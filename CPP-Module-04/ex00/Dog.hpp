/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:16:54 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 14:27:26 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal {

	public:

		Dog( void );
		Dog( const Dog& source_object );
		Dog&	operator=( const Dog& source_object );
		~Dog( void );

		void	makeSound( void ) const;
};

#endif
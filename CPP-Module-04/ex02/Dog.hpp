/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:16:54 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 15:47:22 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

	private:
		Brain *_brain;

	public:

		Dog( void );
		Dog( const Dog& source_object );
		Dog&	operator=( const Dog& source_object );
		~Dog( void );

		void		makeSound( void ) const;
		Brain*		getBrain( void ) const;
		void		changeIdea( int i, std::string idea );
		std::string	getIdea( int i ) const;
};

#endif
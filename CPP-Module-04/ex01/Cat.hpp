/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:17:24 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/28 15:47:29 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Cat : public Animal {

	private:
		Brain *_brain;

	public:

		Cat( void );
		Cat( const Cat& source_object );
		Cat&		operator=( const Cat& source_object );
		~Cat( void );

		void		makeSound( void ) const;
		Brain*		getBrain( void ) const;
		void		changeIdea( int i, std::string idea );
		std::string	getIdea( int i ) const;
};

#endif
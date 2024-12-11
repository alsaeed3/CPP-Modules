/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:17:24 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/27 14:27:09 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Cat : public Animal {

	public:

		Cat( void );
		Cat( const Cat& source_object );
		Cat&	operator=( const Cat& source_object );
		~Cat( void );

		void	makeSound( void ) const;
};

#endif
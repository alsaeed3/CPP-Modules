/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:17:38 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/15 18:24:25 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class   Weapon {

private:

    std::string _type;

public:

    Weapon( void );
    Weapon( const std::string& type );
	~Weapon( void );

    const std::string& getType( void ) const;
    void setType( const std::string& type );
};

#endif
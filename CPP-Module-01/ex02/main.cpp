/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:59:37 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/13 12:14:53 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {

	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << std::endl;
	std::cout << " ================= MEMORY ADDRESSES ================= " << std::endl;
	std::cout << std::endl;
	std::cout << "string    : " << &string << std::endl;
	std::cout << std::endl;
	std::cout << "stringPTR : " << &stringPTR << std::endl;
	std::cout << std::endl;
	std::cout << "stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << " ====================== VALUES ====================== " << std::endl;
	std::cout << std::endl;
	std::cout << "string    : " << string << std::endl;
	std::cout << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
	std::cout << std::endl;

	return 0;
}
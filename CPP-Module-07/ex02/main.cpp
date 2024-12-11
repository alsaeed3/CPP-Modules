/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:19:44 by alsaeed           #+#    #+#             */
/*   Updated: 2024/08/01 19:08:11 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

int main()
{
	Array<int> empty;

	Array<int> a(3);
	Array<int> b(5);

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i;
	
	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i + 5;

	Array<int> c(b);

	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;

	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;

	try
	{
		std::cout << a[5] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}

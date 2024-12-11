/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:23 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/28 16:27:01 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	delete j;//should not create a leak
	delete i;
	std::cout << std::endl;


	std::cout << "_____________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	int size = 10;
	Animal* animals[size];
	Animal bla;
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;
	std::cout << "_____________________" << std::endl;
	std::cout << std::endl;
	for (int i = size - 1; i > -1; i--)
		delete animals[i];
	std::cout << "_____________________" << std::endl;
	std::cout << std::endl;
	std::cout << "_____________________________________________________________________________" << std::endl;
	std::cout << std::endl;

	
	std::cout << "Checking if the Copy is Deep or Shallow" << std::endl;
	std::cout << std::endl;
	std::cout << "Check 1:" << std::endl;
	std::cout << std::endl;
	Dog	originalDog;
	Dog	copiedDog = originalDog;
	std::cout << std::endl;
	std::cout << "_____________________" << std::endl;
	std::cout << std::endl;
	copiedDog.changeIdea( 0, "Deep Idea" );
	std::cout << "originalDog idea0 is: " << originalDog.getIdea( 0 ) << std::endl;
	std::cout << "copiedDog idea0 is: " << copiedDog.getIdea( 0 ) << std::endl;
	if ( originalDog.getIdea( 0 ) == copiedDog.getIdea( 0 ) )
		std::cout << "Shallow Copy" << std::endl;
	else
		std::cout << "Deep Copy" << std::endl;
	std::cout << "_____________________" << std::endl;
	std::cout << std::endl;
	std::cout << "Check 2:" << std::endl;
	std::cout << std::endl;
	Dog basicDog;
	std::cout << std::endl;
	{
		Dog tmpDog = basicDog;
	}
	std::cout << "basicDog idea0: " << basicDog.getIdea( 110 ) << std::endl;
	std::cout << std::endl;
	return 0;
}
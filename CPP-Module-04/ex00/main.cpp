/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:23 by alsaeed           #+#    #+#             */
/*   Updated: 2024/05/01 15:56:31 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void ) {

	std::cout << "*****************************************************************************" << std::endl;
	std::cout << "*----------------------------------ANIMAL-----------------------------------*" << std::endl;
	std::cout << "*****************************************************************************" << std::endl;
	std::cout << std::endl;

	const Animal* animal = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	std::cout << std::endl;

	std::cout << "Animal of type: [ " << animal->getType() << " ] ,makes the following sound: ";
	animal->makeSound();
	std::cout << std::endl;

	std::cout << "Animal of type: [ " << cat->getType() << " ] ,makes the following sound: ";
	cat->makeSound();
	std::cout << std::endl;

	std::cout << "Animal of type: [ " << dog->getType() << " ] ,makes the following sound: ";
	dog->makeSound();
	std::cout << std::endl;

	std::cout << "*****************************************************************************" << std::endl;
	std::cout << "*-------------------------------WRONG-ANIMAL--------------------------------*" << std::endl;
	std::cout << "*****************************************************************************" << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << std::endl;

	std::cout << "WrongAnimal of type: [ " << wrongAnimal->getType() << " ] ,makes the following sound: ";
	wrongAnimal->makeSound();
	std::cout << std::endl;

	std::cout << "WrongAnimal of type: [ " << wrongCat->getType() << " ] ,makes the following sound: ";
	wrongCat->makeSound();
	std::cout << std::endl;

	delete animal;
	delete cat;
	delete dog;
	delete wrongAnimal;
	delete wrongCat;

	return 0;
}
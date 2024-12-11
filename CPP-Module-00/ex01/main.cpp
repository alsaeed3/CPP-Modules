/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:07:52 by alsaeed           #+#    #+#             */
/*   Updated: 2024/04/07 00:21:05 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	PhoneBook		phoneBook;
	std::string		command;
	int				contactOrder = 0;
	int&			orderRef = contactOrder;

	while (true) {
		
		std::cout << "Command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (command.compare("ADD") == 0)
			phoneBook.addCommand(orderRef);
		else if (command.compare("SEARCH") == 0)
			phoneBook.searchCommand();
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "Exiting PhoneBook..." << std::endl;
			break;
		}
		else
			std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
		std::cout << std::endl;
	}
	return 0;
}

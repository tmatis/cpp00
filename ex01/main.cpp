/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:04:05 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 22:23:05 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Phonebook.hpp"
#include <iostream>
#include <limits>

void	search_contact(Phonebook phonebook)
{
	int	index;

	phonebook.list_contact();
	while (true)
	{
		std::cout << "enter the desired index: ";
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cout << "Error: not a integer" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
		{
			phonebook.display_contact(index);
			break ;
		}
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int	main(void)
{
	Phonebook	phonebook;
	std::string	command;

	std::cout << "tmatis's PhoneBook" << std::endl << std::endl;
	command = "";
	while (command != "EXIT")
	{
		std::cout << "PhoneBook # ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			search_contact(phonebook);
	}
}

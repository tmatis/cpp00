/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:27:12 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/16 11:33:21 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Phonebook::Phonebook(void) : _contact_count(0){}

Phonebook::~Phonebook(void) {}

/* ************************************************************************** */
/*                                   FONCTIONS                                */
/* ************************************************************************** */

void	Phonebook::add_contact(void)
{
	if (this->_contact_count < CONTACT_MAX)
		this->_contact_array[this->_contact_count++].create_form();
	else
		std::cout	<< "ERROR: the maximum contact is: " << CONTACT_MAX
					<< std::endl;
}

void	Phonebook::display_contact(int index)
{
	if (index < 0 || index >= this->_contact_count)
		std::cout << "Error: index not found" << std::endl;
	else
	{
		for (size_t i = 0; i < ATTRIBUT_SIZE; i++)
			this->_contact_array[index].get_attribut(i).display();
	}
}

void	print_box(std::string field, bool print_colum)
{
	if (print_colum)
		std::cout << '|';
	if (field.size() > 10)
	{
		std::cout << std::setw(10) << std::left << std::setfill('.')
			<< field.substr(0, 9);
	}
	else
		std::cout << std::setw(10) << std::right << std::setfill(' ')
			<< field;
	std::cout << '|';
}

std::string	itoa(int i)
{
	std::ostringstream oss;

    oss << i;
    return (oss.str());
}

void	Phonebook::list_contact(void)
{
	print_box("index", true);
	print_box("first name", false);
	print_box("last name", false);
	print_box("nickname", false);
	std::cout << std::endl;
	for (int i = 0; i < this->_contact_count; i++)
	{
		print_box(itoa(i), true);
		print_box(this->_contact_array[i].get_attribut(0).get_value(), false);
		print_box(this->_contact_array[i].get_attribut(1).get_value(), false);
		print_box(this->_contact_array[i].get_attribut(2).get_value(), false);
		std::cout << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:27:12 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 19:38:29 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:00:57 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 20:35:31 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* ************************************************************************** */
/*                                     DATA                                   */
/* ************************************************************************** */

const std::string Contact::_attribut_names[ATTRIBUT_SIZE] =
{
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret"
};

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Contact::Contact(void) {}

Contact::~Contact(void) {}

/* ************************************************************************** */
/*                                   FONCTIONS                                */
/* ************************************************************************** */

void	Contact::create_form(void)
{
	for (size_t i = 0; i < ATTRIBUT_SIZE; i++)
		this->_attribut_array[i].form_value(this->_attribut_names[i]);
}

Attribut	Contact::get_attribut(size_t index)
{
	return (this->_attribut_array[index]);
}

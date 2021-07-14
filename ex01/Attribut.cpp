/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Attribut.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:43:01 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 21:48:02 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Attribut.hpp"
#include <iostream>

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Attribut::Attribut(void) : _name(""), _value("") {}

Attribut::~Attribut(void) {}

/* ************************************************************************** */
/*                                   FONCTIONS                                */
/* ************************************************************************** */

void	Attribut::form_value(std::string name)
{
	this->_name = name;
	std::cout << "Enter the " << this->_name << ": ";
	std::getline(std::cin, this->_value);
}

void	Attribut::display(void)
{
	std::cout << this->_name << ": " << this->_value << std::endl;
}

std::string	Attribut::get_value(void) const
{
	return (this->_value);
}

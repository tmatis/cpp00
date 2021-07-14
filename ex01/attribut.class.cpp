/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attribut.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:40:38 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 13:01:34 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "attribut.class.hpp"
#include <iostream>

Attribut::Attribut(std::string name) : _name(name)
{
	std::cout << "enter the " << this->_name << ": ";
	std::getline(std::cin, this->_value);
}

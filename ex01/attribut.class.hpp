/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attribut.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:35:13 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 12:46:52 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATTRIBUT_CLASS_HPP

# define ATTRIBUT_CLASS_HPP

# include <string>

class Attribut
{
	private:
		const std::string	_name;
		std::string			_value;
	public:
		Attribut(const std::string name);
		std::string	get_name(void);
		std::string	get_value(void);

};

 #endif

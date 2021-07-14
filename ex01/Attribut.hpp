/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attribut.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:39:40 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 19:14:17 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATTRIBUT_HPP

# define ATTRIBUT_HPP

#include <string>

class Attribut
{
	private:
		std::string			_name;
		std::string 		_value;
	public:
					Attribut(void);
					~Attribut();
		void		form_value(std::string name);
		std::string	get_value(void) const;
		std::string	get_name(void) const;
	};


#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Attribut.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:39:40 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 21:47:47 by tmatis           ###   ########.fr       */
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
		void		display(void);
		std::string	get_value(void) const;
	};


#endif

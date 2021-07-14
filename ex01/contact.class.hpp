/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:21:48 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 12:48:44 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP

# define CONTACT_CLASS_HPP

# include "attribut.class.hpp"

class	Contact
{	
	private:
		Attribut	_first_name;
		Attribut	_last_name;
		Attribut	_nickname;
		Attribut	_phone_number;
		Attribut	_darkest_secret;
	public:
		Contact(void);
};

#endif

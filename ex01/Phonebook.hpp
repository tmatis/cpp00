/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:22:04 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 19:34:36 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

# define CONTACT_MAX 8

class Phonebook
{
	private:
		Contact	_contact_array[CONTACT_MAX];
		int		_contact_count;
	public:
				Phonebook(void);
				~Phonebook();
		void	add_contact(void);
};

#endif

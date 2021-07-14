/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:22:04 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 21:50:50 by tmatis           ###   ########.fr       */
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
		void	display_contact(int index);
		void	list_contact(void);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:56:22 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 19:34:21 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include "Attribut.hpp"

# define ATTRIBUT_SIZE 5

class	Contact
{
	private:
		const static std::string	_attribut_names[ATTRIBUT_SIZE];
		Attribut					_attribut_array[ATTRIBUT_SIZE];			
	public:
				Contact(void);
				~Contact(void);
		void	create_form(void);
};

#endif

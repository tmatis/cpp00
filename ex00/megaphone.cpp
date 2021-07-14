/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:04:05 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/14 10:40:43 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	upper_string(char *cstr)
{
	std::string	str = cstr;

	for (size_t i = 0; i < str.size(); i++)
		str.at(i) = std::toupper(str.at(i));
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		for (int i = 1; i < argc; i++)
			std::cout << upper_string(argv[i]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}

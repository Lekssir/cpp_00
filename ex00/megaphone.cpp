/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <dweeper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:09:30 by dweeper           #+#    #+#             */
/*   Updated: 2021/12/28 14:29:28 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (*(++argv))
	{
		while(**argv)
		{
			if (**argv >= 97 && **argv <= 122)
				std::cout << (char)(**argv - 32);
			else
				std::cout << (**argv);
			(*argv)++;
		}
	}
	std::cout << std::endl;
}
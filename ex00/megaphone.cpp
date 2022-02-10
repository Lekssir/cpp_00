/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <dweeper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:09:30 by dweeper           #+#    #+#             */
/*   Updated: 2022/02/10 14:27:53 by dweeper          ###   ########.fr       */
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
			if (std::islower(**argv))
				std::cout << (char)std::toupper(**argv);
			else
				std::cout << (**argv);
			(*argv)++;
		}
	}
	std::cout << std::endl;
}

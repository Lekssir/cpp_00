/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <dweeper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:51:54 by dweeper           #+#    #+#             */
/*   Updated: 2022/01/05 21:01:52 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phone_book.hpp"

int	parse_command(std::string command)
{
	if (command == "ADD")
		add_2_book();
	else if (command == "SEARCH")
		search_in_book();
	else if (command == "EXIT")
		return (1);
	return (0);
}

int	main()
{
	std::string	input;

	while (1)
	{
		std::cin >> input;
		if (parse_command(input))
			break ;
	}
	return (0);
}
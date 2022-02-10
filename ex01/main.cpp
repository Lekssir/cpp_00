/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <dweeper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:51:54 by dweeper           #+#    #+#             */
/*   Updated: 2022/02/10 15:40:27 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phone_book.hpp"

int	main()
{
	std::string	input;
	Phone_book	p_book;

	while (1)
	{
		std::cin.clear();
		std::cout << "Please, enter the command..." << std::endl;
		if (std::getline(std::cin, input).eof())
			break;
		if (input == "ADD")
			p_book.add();
		else if (input == "SEARCH")
			p_book.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command. Avaiable commands are: ADD, SEARCH and EXIT." << std::endl;
		if (std::cin.eof())
			break;
	}
	return (0);
}

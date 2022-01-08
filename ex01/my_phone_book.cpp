/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phone_book.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <dweeper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:43:47 by dweeper           #+#    #+#             */
/*   Updated: 2022/01/08 17:58:26 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phone_book.hpp"

Phone_book::Phone_book()
{
	top_index = 0;
	used_index = 0;
	return ;
}

void	Phone_book::display_contc_info(int index)
{
	std::cout << cont_array[index].first_name << std::endl;
	std::cout << cont_array[index].last_name << std::endl;
	std::cout << cont_array[index].nickname << std::endl;
	std::cout << cont_array[index].phone_number << std::endl;
	std::cout << cont_array[index].darkest_secret << std::endl;
	return ;
}

void	Phone_book::display_filled_contacts()
{
	std::cout << std::setw(10) << "index" << " | " << std::setw(10) << "first name"
		<< " | " << std::setw(10) << "last name" << " | "
		<< std::setw(10) <<  "nickname" << std::endl;
	for (int i = 0; i < used_index; i++) {
		std::cout << std::setw(10) << i + 1 << " | " << std::setw(10) << cont_array[i].first_name
			<< " | " << std::setw(10)	<< cont_array[i].last_name << " | "
			<< std::setw(10) <<  cont_array[i].nickname << std::endl;
	}
	return ;
}

void	Phone_book::add()
{
	std::cout << "Adding new contact to the book..." << std::endl;
	std::cout << "Please, enter the new contact's first name." << std::endl;
	std::cin >> cont_array[top_index].first_name;
	std::cout << "Please, enter the new contact's last name." << std::endl;
	std::cin >> cont_array[top_index].last_name;
	std::cout << "Please, enter the new contact's nickname." << std::endl;
	std::cin >> cont_array[top_index].nickname;
	std::cout << "Please, enter the new contact's phone number." << std::endl;
	std::cin >> cont_array[top_index].phone_number;
	std::cout << "Please, enter the new contact's darkest secret." << std::endl;
	std::cin >> cont_array[top_index].darkest_secret;
	std::cout << "New contact successfully added!" << std::endl;
	top_index++;
	used_index++;
	if (top_index == 8)
		top_index = 0;
	if (used_index > 8)
		used_index = 8;
	return ;
}

void	Phone_book::search()
{
	int	ent_number;

	if (used_index == 0)
	{
		std::cout << "Contact list is empty! Consider adding some contacts first." << std::endl;
		return ;
	}
	display_filled_contacts();
	std::cout << "Enter the index of the contact..." << std::endl;
	std::cin >> ent_number;
	if (ent_number < 1 || ent_number > used_index)
		std::cout << "Incorrect index value, search aborted." << std::endl;
	else
		display_contc_info(ent_number - 1);
	return ;
}

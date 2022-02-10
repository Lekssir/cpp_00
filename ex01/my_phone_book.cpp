/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phone_book.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <dweeper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:43:47 by dweeper           #+#    #+#             */
/*   Updated: 2022/02/10 16:16:54 by dweeper          ###   ########.fr       */
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
	std::cout << "First name: " << cont_array[index].first_name << std::endl;
	std::cout << "Last name: " << cont_array[index].last_name << std::endl;
	std::cout << "Nickname: " << cont_array[index].nickname << std::endl;
	std::cout << "Phone_number: " << cont_array[index].phone_number << std::endl;
	std::cout << "Darkest_secret: " << cont_array[index].darkest_secret << std::endl;
	return ;
}

void	Phone_book::display_filled_contacts()
{
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name"
		<< "|" << std::setw(10) << "last name" << "|"
		<< std::setw(10) <<  "nickname" << std::endl;
	for (int i = 0; i < used_index; i++) {
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10)
			<< My_phone_book::truncate(cont_array[i].first_name, 10, '.')
			<< "|" << std::setw(10)
			<< My_phone_book::truncate(cont_array[i].last_name, 10, '.')
			<< "|" << std::setw(10) 
			<< My_phone_book::truncate(cont_array[i].nickname, 10, '.')
			<< std::endl;
	}
	return ;
}

void	Phone_book::add()
{
	std::cout << "Adding new contact to the book..." << std::endl;
	std::cout << "Please, enter the new contact's first name." << std::endl;
	if (std::getline(std::cin, cont_array[top_index].first_name).eof())
		return ;
	std::cout << "Please, enter the new contact's last name." << std::endl;
	if (std::getline(std::cin, cont_array[top_index].last_name).eof())
		return ;
	std::cout << "Please, enter the new contact's nickname." << std::endl;
	if (std::getline(std::cin, cont_array[top_index].nickname).eof())
		return ;
	std::cout << "Please, enter the new contact's phone number." << std::endl;
	if (std::getline(std::cin, cont_array[top_index].phone_number).eof())
		return ;
	std::cout << "Please, enter the new contact's darkest secret." << std::endl;
	if (std::getline(std::cin, cont_array[top_index].darkest_secret).eof())
		return ;
	std::cout << "New contact successfully added!" << std::endl;
	if (used_index < 8)
		used_index++;
	if (top_index < 7)
		top_index++;
	else
		top_index = 0;
	return ;
}

void	Phone_book::search()
{
	int			ent_number;
	std::string	resiudal;

	if (used_index == 0) {
		std::cout << "Contact list is empty! Consider adding some contacts first." << std::endl;
		return ;
	}
	display_filled_contacts();
	std::cout << "Enter the index of the contact..." << std::endl;
	std::cin >> ent_number;
	if (std::getline(std::cin, resiudal).eof())
		return ;
	if (ent_number < 1 || ent_number > used_index || My_phone_book::ns_len(resiudal) > 0)
		std::cout << "Incorrect index value, search aborted." << std::endl;
	else
		display_contc_info(ent_number - 1);
	return ;
}

std::string	My_phone_book::truncate(std::string const& str, unsigned int width, char fill_char)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + fill_char);
	else
		return (str);
}

int	My_phone_book::ns_len(std::string const& str)
{
	int	len;
	int	count;

	len = 0;
	count = 0;
	while (str[count]) {
		if (!isspace(str[count]))
			len++;
		count++;
	}
	return (len);
}

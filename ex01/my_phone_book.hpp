/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phone_book.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <dweeper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:43:47 by dweeper           #+#    #+#             */
/*   Updated: 2022/01/05 20:55:35 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_PHONE_BOOK_HPP
# define MY_PHONE_BOOK_HPP

# include <iostream>
# include <string>

class	Contact
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

class Phone_book
{
private:
	Contact	cont_array[8];
public:
	Phone_book(/* args */);
	~Phone_book();
	void	add();
	void	search();
	void	exit();
};

Phone_book::Phone_book(/* args */)
{
}

Phone_book::~Phone_book()
{
}

#endif
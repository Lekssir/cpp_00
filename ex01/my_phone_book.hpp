/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phone_book.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <dweeper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:43:47 by dweeper           #+#    #+#             */
/*   Updated: 2022/01/08 17:16:04 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_PHONE_BOOK_HPP
# define MY_PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Contact
{
public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

class	Phone_book {
public:
	Phone_book();
	void	add();
	void	search();
	void	exit();
private:
	void	display_contc_info(int	index);
	void	display_filled_contacts();

	Contact	cont_array[8];
	int		top_index;
	int		used_index;
};

#endif

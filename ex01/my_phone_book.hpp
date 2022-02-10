/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phone_book.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <dweeper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:43:47 by dweeper           #+#    #+#             */
/*   Updated: 2022/02/10 16:12:52 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_PHONE_BOOK_HPP
# define MY_PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <ctype.h>

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
private:
	void	display_contc_info(int	index);
	void	display_filled_contacts();

	Contact	cont_array[8];
	int		top_index;
	int		used_index;
};

namespace My_phone_book {
	std::string	truncate(std::string const& str, unsigned int width, char fill_char);
	int			ns_len(std::string const& str);
}

#endif

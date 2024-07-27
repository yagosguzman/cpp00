/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:10:20 by ysanchez          #+#    #+#             */
/*   Updated: 2024/07/27 13:57:36 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>


void	PhoneBook::set_contact(Contact data){
	// std::string	input;
	data.set_firstname();
	data.set_lastname();
	data.set_nickname();
	data.set_phone();
	data.set_secret();
	std::cout << data.get_firstname() << _index;
	return;
};

int main(void)
{
	std::string option;
	PhoneBook myphonebook;
	Contact data;

	std::cout << "Please type ADD, SEARCH or EXIT\n";
	while (1){
		std::cin >> option;
		// if (!(std::cin >> option)) Esto me da problemas
		// 	continue; //
		if (option.compare("ADD") == 0)
			myphonebook.set_contact(data);
		if (option.compare("SEARCH") == 0){
			std::cout << "Search Contact\n";
			return (0);
		}
		if (option.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "Just type ADD, SEARCH or EXIT :)\n";
	}
}
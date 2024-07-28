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


PhoneBook::PhoneBook (void)
{
	std::cout << "Welcome to your Amazing Phonebook. You can store up to 8 contacts." << std::endl;
	this->_index = 0;
}

PhoneBook::~PhoneBook (void)
{
	std::cout << "Thanks for using the AmazingPhoneBook" << std::endl;
}

void	PhoneBook::set_contact(Contact data){
	data.set_firstname();
	data.set_lastname();
	data.set_nickname();
	data.set_phone();
	data.set_secret();
	this->_contacts[this->_index] = data;
	std::cout << "Contact saved in slot " << _index << std::endl;
    if (this->_index == 7)
        this->_index = -1;
    this->_index++;
	return;
};

void	PhoneBook::show_all(void)
{
	int limit;
	this->limit = PhoneBook._index;
	while (limit >= 0)
	{
		
	}
}

int main(void)
{
	std::string option;
	PhoneBook myphonebook;
	Contact data;

	std::cout << "Please type ADD, SEARCH or EXIT\n";
	while (1){
		std::getline(std::cin, option);
		// if (!(std::cin.eof)) Esto me da problemas
		// 	continue; //
		if (option.compare("ADD") == 0)
			myphonebook.set_contact(data);
		else if (option.compare("SEARCH") == 0){
			std::cout << "Search Contact\n";
			return (0);
		}
		else if (option.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "Just type ADD, SEARCH or EXIT :)\n";
	}
}
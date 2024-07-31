/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:10:20 by ysanchez          #+#    #+#             */
/*   Updated: 2024/07/31 23:11:03 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <limits>

PhoneBook::PhoneBook (void)
{
	std::cout << "Welcome to your Amazing Phonebook. You can store up to 8 contacts." << std::endl;
	this->_index = -1;
}

PhoneBook::~PhoneBook (void)
{
	std::cout << "Thanks for using the AmazingPhoneBook." << std::endl;
}

void	PhoneBook::set_contact(Contact data){
	if (_index == 7)
		this->_index = 0;
	else
		this->_index++;
	data.set_firstname();
	data.set_lastname();
	data.set_nickname();
	data.set_phone();
	data.set_secret();
	this->_contacts[this->_index] = data;
	std::cout << "\nContact saved on slot " << _index << ".\n\n";
	std::cout << "Please type ADD, SEARCH or EXIT" << std::endl;
	return;
};

void 	PhoneBook::get_contact(void)
{
	int	option;
	int flag = 0;
	
	if (_index == -1)
	{
		std::cout << "\nNO CONTACTS SAVED YET!\n\nPlease type ADD, SEARCH or EXIT" << std::endl;
		return;
	}
	std::cout << "\nPlease introduce the index number of the contact you want too see the info:\n";
	while (flag != 1)
	{
		std::cin >> option;
		if (std::cin.eof())
			return;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cerr << "Invalid input. Please enter a valid number between 0 and 7.\n";
			continue;
		}
		if (option >= 0 && option <= 7) {
			std::cout << "First name: " << _contacts[option].get_firstname() << std::endl;
			std::cout << "Last name: " << _contacts[option].get_lastname() << std::endl;
			std::cout << "Nickname: " << _contacts[option].get_nickname() << std::endl;
			std::cout << "Phone: " << _contacts[option].get_phone() << std::endl;
			std::cout << "Secret: " << _contacts[option].get_secret() << std::endl;
			flag = 1;
		}
		else
			std::cerr << "INDEX OUT OF RANGE\nPlease enter a number between 0 and 7" << std::endl;

	}
	return;
}


void	PhoneBook::show_all(void)
{
	int limit = 0;

	while (limit <= _index)
	{
		std::string first = _contacts[limit].get_firstname();
		std::string last = _contacts[limit].get_lastname();
		std::string nick = _contacts[limit].get_nickname();

		if (first.length() > 10) first = first.substr(0, 9) + ".";
		if (last.length() > 10) last = last.substr(0, 9) + ".";
		if (nick.length() > 10) nick = nick.substr(0, 9) + ".";

		std::cout << std::setw(10) << std::right << limit << "|" 
				<< std::setw(10) << std::right << first << "|" 
				<< std::setw(10) << std::right << last << "|" 
				<< std::setw(10) << std::right << nick << "|" << std::endl;
        limit++;
	}	
	return;
}

int main(void)
{
	std::string option;
	PhoneBook myphonebook;
	Contact data;

	std::cout << "Please type ADD, SEARCH or EXIT\n";
	while (1)
	{
		std::getline(std::cin, option);
		if (std::cin.eof())
		{
			std::cerr << "\nEOF detected, closing the program. Bye!\n" << std::endl;
			break;
		}
		if (option.compare("ADD") == 0)
			myphonebook.set_contact(data);
		else if (option.compare("SEARCH") == 0)
		{
			myphonebook.show_all();
			myphonebook.get_contact();
		}
		else if (option.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "\nJust type ADD, SEARCH or EXIT :)\n";
	}
}
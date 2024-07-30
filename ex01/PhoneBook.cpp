/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:10:20 by ysanchez          #+#    #+#             */
/*   Updated: 2024/07/30 21:37:43 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <limits>

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
    if (this->_index == 7)
        this->_index = -1;
    this->_index++;
	return;
};

void	PhoneBook::show_all(void)
{
	int limit = 0;
	int	option;
	
	while (limit < _index)
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
                  << std::setw(10) << std::right << nick << std::endl;
        limit++;
	}
	std::cout << "Please introduce the index number of the contact you want too see the info:\n";
	while (1)
	{
		std::cin >> option;
		if (std::cin.fail() || std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cerr << "INVALID INPUT!\nPlease enter a number between 0 and 7." << std::endl;
            continue;
        }
		if ((option >= 0 && option <= 7) && !_contacts[option].get_firstname().empty()){
			std::cout << "First name: " << _contacts[option].get_firstname() << std::endl;
			std::cout << "Last name: " << _contacts[option].get_lastname() << std::endl;
			std::cout << "Nickname: " << _contacts[option].get_nickname() << std::endl;
			std::cout << "Phone: " << _contacts[option].get_phone() << std::endl;
			std::cout << "Secret: " << _contacts[option].get_secret() << std::endl;
		}
		else
			std::cerr << "INDEX OUT OF RANGE\nPlease enter a number between 0 and " << _index << std::endl;
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
		if (!std::getline(std::cin, option))
		{
			if (std::cin.eof() == 1){
				if (std::cin.eof()==1)
				{
					std::cin.clear();
					std::cin.ignore();
					continue;
				}
		}
			if (option.compare("ADD") == 0)
				myphonebook.set_contact(data);
			else if (option.compare("SEARCH") == 0)
				myphonebook.show_all();
			else if (option.compare("EXIT") == 0)
				return (0);
			else
				std::cout << "Just type ADD, SEARCH or EXIT :)\n";
	}
}
}
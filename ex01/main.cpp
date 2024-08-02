/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 20:33:53 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/02 20:34:26 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(int argc, char **argv)
{
	if (argc > 1 && argv[1])
	{
		std::cerr << "Error\nPlease execute with no arguments" << std::endl;
		return (1);
	}
	
	std::cout << "\nPlease type ADD, SEARCH or EXIT:\n";
	std::string option;
	PhoneBook myphonebook;
	Contact data;

	while (1)
	{
		std::getline(std::cin, option);
		if (std::cin.eof())
		{
			std::cerr << "\nEOF detected, closing the program. Bye!\n" << std::endl;
			break;
		}
		if (option.compare("ADD") == 0){
			myphonebook.set_contact(data);
			std::cout << "\nPlease type ADD, SEARCH or EXIT:\n";
			continue;
		}
		else if (option.compare("SEARCH") == 0)
		{
			myphonebook.show_all();
			myphonebook.get_contact();
			continue;
		}
		else if (option.compare("EXIT") == 0)
			return (0);
		else
			std::cerr << "Write ADD, SEARCH or EXIT :)" << std::endl; 
	}
	return (0);
}
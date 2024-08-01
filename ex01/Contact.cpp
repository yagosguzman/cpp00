/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:04:28 by ysanchez          #+#    #+#             */
/*   Updated: 2024/08/01 19:44:05 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cctype>

void	Contact::set_firstname(void){
	std::cout << "FIRST NAME: ";
	std::getline(std::cin, this->_firstname);
	return;
}
void	Contact::set_lastname(void){
	std::cout << "LAST NAME: ";
	std::getline(std::cin, this->_lastname);
	return;
}

void	Contact::set_nickname(void){
	std::cout << "NICKNAME: ";
	std::getline(std::cin, this->_nickname);
	return;
}

void	Contact::set_phone(void){
	std::cout << "PHONE: ";
	std::getline(std::cin, this->_phone);
	return;
}
void	Contact::set_secret(void){
	std::cout << "SECRET: ";
	std::getline(std::cin, this->_secret);
	return;
}

std::string Contact::get_firstname(void) const{
	return this->_firstname;
}

std::string	Contact::get_lastname(void) const{
	return this->_lastname;
}

std::string	Contact::get_nickname(void) const{
	return this->_nickname;
}

std::string	Contact::get_phone(void) const{
	return this->_phone;
}

std::string	Contact::get_secret(void) const{
	return this->_secret;
}

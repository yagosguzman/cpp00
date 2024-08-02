#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits>

class PhoneBook
{
	private:
			Contact _contacts[8];
			int _index;
			int _saved;
	public:
			PhoneBook(void);
			~PhoneBook(void);
			void	set_contact(Contact _contacts);
			void	show_all(void);
			void 	get_contact(void);
			int		invalid_phone(std::string phone);
};

#endif
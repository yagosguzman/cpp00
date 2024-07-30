#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>


class PhoneBook
{
	private:
			Contact _contacts[8];
			int _index;
	public:
			PhoneBook(void);
			~PhoneBook(void);
			void	set_contact(Contact _contacts);
			void	show_all(void);



};

#endif
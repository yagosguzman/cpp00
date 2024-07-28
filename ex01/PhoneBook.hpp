#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
			Contact _contacts[8];
			int _index;
	public:
			PhoneBook(void);
			~PhoneBook(void);
			void	set_contact(Contact _contacts);


};



#endif
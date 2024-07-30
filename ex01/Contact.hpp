#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBook.hpp"
#include <string>

class Contact
{
	private:
			std::string _firstname;
			std::string _lastname;
			std::string _nickname;
			std::string _phone;
			std::string _secret;
	
	public:
			void		set_firstname(void);
			void		set_lastname(void);
			void		set_nickname(void);
			void		set_phone(void);
			void		set_secret(void);
			std::string	get_firstname(void) const;
			std::string	get_lastname(void) const;
			std::string	get_nickname(void) const;
			std::string	get_phone(void) const;
			std::string	get_secret(void) const;
};

#endif
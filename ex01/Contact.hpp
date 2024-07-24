#ifndef CONTACT_HPP
# define CONTACT_HPP

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
			void	set_first_name(std::string _firstname);
			void	set_last_name(std::string _lastname);
			void	set_nickname(std::string _nickname);
			void	set_phone(std::string _phone);
			void	set_secret(std::string _secret);

};

#endif
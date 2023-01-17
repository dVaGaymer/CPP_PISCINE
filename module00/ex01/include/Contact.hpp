#pragma once

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;	
		std::string	secret;
		int	 		id;

		static std::string	format(std::string str);

	public:
		Contact();
		Contact(std::string firstName,
			std::string lastName,
			std::string nickname,
			std::string phoneNumber,
			std::string secret);
		bool	isEmpty();
		void	printCompleteInfo();
		void	printBasicInfo();
		void	askInfo(int id);
		void	setId(int id);
};

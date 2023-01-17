#include "Contact.hpp"

Contact::Contact(): id(0){}

Contact::Contact(std::string firstName,
	std::string lastName,
	std::string nickname,
	std::string phoneNumber,
	std::string secret):
firstName(firstName),
lastName(lastName),
nickname(nickname),
phoneNumber(phoneNumber),
secret(secret)
{}

bool	Contact::isEmpty()
{
	return (this->id == 0);
}

void	Contact::askInfo(int id)
{
	this->id = id;
	std::string	firstName, lastName, nickname, phoneNumber, secret;
	std::cout << "First Name: (cannot be empty)\n";
	while (firstName.empty())
		std::cin >> firstName;
	this->firstName = firstName;
	std::cout << "Last Name: (cannot be empty)\n";
	while (lastName.empty())
		std::cin >> lastName;
	this->lastName = lastName;
	std::cout << "Nickname: (cannot be empty)\n";
	while (nickname.empty())
		std::cin >> nickname;
	std::cout << "Phone Number: (cannot be empty)\n";
	this->nickname = nickname;
	while (phoneNumber.empty())
		std::cin >> phoneNumber;
	this->phoneNumber = phoneNumber;
	std::cout << "Darkest Secret: (cannot be empty)\n";
	while (secret.empty())
		std::cin >> secret;
	this->secret = secret;
}

void	Contact::setId(int id) {this->id = id;}

std::string	Contact::format(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9).append("."));
	else
		return (std::string(10 - str.length(), ' ').append(str));
}

void	Contact::printBasicInfo()
{
	std::cout << format(std::to_string(this->id)) << "|";
	std::cout << format(this->firstName) << "|";
	std::cout << format(this->lastName) << "|";
	std::cout << format(this->nickname) << "\n";
}

void	Contact::printCompleteInfo()
{
	std::cout << "-------------------------------------------------\n";
	std::cout << "First Name: " << this->firstName << "\n";
	std::cout << "Last Name: " << this->lastName << "\n";
	std::cout << "nickname: " << this->nickname << "\n";
	std::cout << "Phone Number: " << this->phoneNumber << "\n";
	std::cout << "Darkest Secret: " << this->secret << "\n";
	std::cout << "-------------------------------------------------\n";
}

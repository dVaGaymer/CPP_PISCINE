#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook():
	index(0)
{}

void	PhoneBook::setIndex(int index)
{
	this->index = index; 
}
int		PhoneBook::getIndex()
{
	contacts[index].printBasicInfo(); return this->index;
}

void	PhoneBook::setContact(Contact c)
{
	if (this->index == 8)
		this->index = 0;
	c.setId(index + 1);
	contacts[this->index] = c;
	this->index++;
}

void	PhoneBook::add()
{
	if (this->index == 8)
		this->index = 0;
	contacts[this->index].askInfo(index + 1);
	this->index++;
}

void	PhoneBook::list()
{
	std::cout << "     index|first name| last name|  nickname\n";
	for(int i = 0; i < 8; i++)
		if (!this->contacts[i].isEmpty())
			contacts[i].printBasicInfo();
}

void	PhoneBook::search()
{
	int	opt;
	this->list();
	std::cin >> opt;
	if (1 > opt || 8 < opt)
	{
		std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid.\n";
		return ;
	}
	contacts[opt - 1].printCompleteInfo();
}

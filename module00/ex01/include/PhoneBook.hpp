#pragma once

#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;

	public:
		PhoneBook();

		void	add();
		void	search();
		void	list();

		void	setContact(Contact c);
		void	setIndex(int index);
		int		getIndex();
};

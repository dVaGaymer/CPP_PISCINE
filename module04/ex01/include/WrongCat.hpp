#pragma once
#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &o);
		~WrongCat();
		WrongCat & operator=(WrongCat const &o);

		void	makeSound() const;
		std::string	getType() const;
};
#endif


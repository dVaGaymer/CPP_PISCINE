#pragma once
#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(Animal const &o);
		~Animal();
		Animal & operator=(Animal const &o);

		virtual void	makeSound() const;
		virtual std::string	getType() const;
};
#endif


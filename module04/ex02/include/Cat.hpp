#pragma once
#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &o);
		~Cat();
		Cat & operator=(Cat const &o);

		void	makeSound() const;
		std::string	getType() const;

		void	printBrain() const;
};
#endif


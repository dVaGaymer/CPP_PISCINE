#pragma once
#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &o);
		~Dog();
		Dog & operator=(Dog const &o);

		void	makeSound() const;
		std::string	getType() const;

		void	printBrain() const;
};
#endif


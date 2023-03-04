#pragma once
#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

#include "Brain.hpp"

class Animal
{
	/* SHOULD _brain BE DECLARED IN DOG AND CAT, AND NO HERE??????????? */
	protected:
		std::string	_type;
		Brain*	_brain;
	public:
		Animal();
		Animal(Animal const &o);
		virtual ~Animal();
		Animal & operator=(Animal const &o);

		virtual void	makeSound() const = 0;
		virtual std::string	getType() const = 0;
		virtual void	printBrain() const = 0;
};
#endif


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

		virtual void	makeSound() const;
		virtual std::string	getType() const;
		virtual void	printBrain() const;
};
#endif


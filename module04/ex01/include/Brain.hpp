#pragma once
#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>
#include <iostream>
#include <stdlib.h>

# define IDEAS_N 1000

class Brain
{
	private:
		std::string	_ideas[IDEAS_N];
	public:
		Brain();
		Brain(std::string ideas[IDEAS_N]);
		Brain(Brain const &o);
		~Brain();
		Brain & operator=(Brain const &o);

		void	printIdeas() const;
};
#endif


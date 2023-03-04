#include "Cat.hpp"

Cat::Cat()
	:Animal()
{
	this->_type = "Cat";
}

Cat::Cat(Cat const &o)
	:Animal()
{
	this->_type = o._type;
}

Cat::~Cat()
{

}

Cat & Cat::operator=(Cat const &o)
{
	this->_type = o._type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "meow mow mrow mrrr prr hh mrrrrrrrrrrawr mew rrrr e-e-e-e-e-e awr hiiiiiiiiiss mEEEwr aaaaaaaaaaaa" << std::endl;
}

std::string	Cat::getType() const { return this->_type; }

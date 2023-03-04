#include "WrongCat.hpp"

WrongCat::WrongCat()
	:WrongAnimal()
{
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &o)
	:WrongAnimal()
{
	this->_type = o._type;
}

WrongCat::~WrongCat()
{

}

WrongCat & WrongCat::operator=(WrongCat const &o)
{
	this->_type = o._type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "meow mow mrow mrrr prr hh mrrrrrrrrrrawr mew rrrr e-e-e-e-e-e awr hiiiiiiiiiss mEEEwr aaaaaaaaaaaa" << std::endl;
}

std::string	WrongCat::getType() const { return this->_type; }

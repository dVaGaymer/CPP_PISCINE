#include "Animal.hpp"

Animal::Animal()
	:_type(""){}

Animal::Animal(Animal const &o)
	:_type(o._type){}

Animal::~Animal()
{

}

Animal & Animal::operator=(Animal const &o)
{
	this->_type = o._type;
	return (*this);
}

void	Animal::makeSound() const {}

std::string	Animal::getType() const { return this->_type; }

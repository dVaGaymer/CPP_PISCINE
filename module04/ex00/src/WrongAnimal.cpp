#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	:_type(""){}

WrongAnimal::WrongAnimal(WrongAnimal const &o)
	:_type(o._type){}

WrongAnimal::~WrongAnimal()
{

}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &o)
{
	this->_type = o._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{std::cout << "WrongAnimal fake sound" << std::endl;}

std::string	WrongAnimal::getType() const { return this->_type; }

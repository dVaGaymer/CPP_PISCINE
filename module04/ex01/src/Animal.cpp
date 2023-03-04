#include "Animal.hpp"

Animal::Animal()
	:_type(""), _brain(NULL){}

Animal::Animal(Animal const &o)
	:_type(o._type), _brain(NULL){}

Animal::~Animal()
{}

Animal & Animal::operator=(Animal const &o)
{
	this->_type = o._type;
	this->_brain = o._brain;
	return (*this);
}

void	Animal::makeSound() const {}

std::string	Animal::getType() const { return this->_type; }
void	Animal::printBrain() const {}

#include "Dog.hpp"

Dog::Dog()
	:Animal()
{
	this->_type = "Dog";
}

Dog::Dog(Dog const &o)
	:Animal()
{
	this->_type = o._type;
}

Dog::~Dog()
{

}

Dog & Dog::operator=(Dog const &o)
{
	this->_type = o._type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "guau-guau gua gua jau jau aahhsaa aasshhh grrgggrrr uufgg" << std::endl;
}

std::string	Dog::getType() const { return this->_type; }

#include "Dog.hpp"

Dog::Dog()
	:Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &o)
	:Animal()
{
	this->_type = o._type;
	/* DEEP COPY */
	this->_brain = new Brain(*o._brain);
	/* SHALLOW COPY */
	// this->_brain = o._brain;
}

Dog::~Dog()
{
	delete this->_brain;
}

Dog & Dog::operator=(Dog const &o)
{
	this->_type = o._type;
	/* DEEP COPY */
	this->_brain = new Brain(*o._brain);
	/* SHALLOW COPY */
	// this->_brain = o._brain;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "guau-guau gua gua jau jau aahhsaa aasshhh grrgggrrr uufgg" << std::endl;
}

std::string	Dog::getType() const { return this->_type; }

void	Dog::printBrain() const
{
	if (NULL == this->_brain)
	{
		std::cout << "This " << this->_type << " lost his brain!" << std::endl;
		return ;
	}
	this->_brain->printIdeas();
}

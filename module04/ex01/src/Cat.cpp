#include "Cat.hpp"

Cat::Cat()
	:Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &o)
	:Animal()
{
	this->_type = o._type;
	/* DEEP COPY */
	this->_brain = new Brain(*o._brain);
	/* SHALLOW COPY */
	// this->_brain = o._brain;
}

Cat::~Cat()
{
	delete this->_brain;
}

Cat & Cat::operator=(Cat const &o)
{
	this->_type = o._type;
	/* DEEP COPY */
	this->_brain = new Brain(*o._brain);
	/* SHALLOW COPY */
	// this->_brain = o._brain;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "meow mow mrow mrrr prr hh mrrrrrrrrrrawr mew rrrr e-e-e-e-e-e awr hiiiiiiiiiss mEEEwr aaaaaaaaaaaa" << std::endl;
}

std::string	Cat::getType() const { return this->_type; }

void	Cat::printBrain() const
{
	if (NULL == this->_brain)
	{
		std::cout << "This " << this->_type << " lost his brain!" << std::endl;
		return ;
	}
	this->_brain->printIdeas();
}

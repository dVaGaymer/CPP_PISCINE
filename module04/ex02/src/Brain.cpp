#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < IDEAS_N; i++)
		this->_ideas[i] = std::string("idea");
}

Brain::Brain(Brain const &o)
{
	for (int i = 0; i < IDEAS_N; i++)
		this->_ideas[i] = o._ideas[i];
}

Brain::~Brain() {}

Brain & Brain::operator=(Brain const &o)
{
	for (int i = 0; i < IDEAS_N; i++)
		this->_ideas[i] = o._ideas[i];
	return *this;
}

void	Brain::printIdeas() const
{
	for (int i = 0; i < IDEAS_N; i++)
		std::cout << _ideas[i] << std::endl;
}

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
	:name(name){}

Zombie::Zombie(const Zombie &o)
	:name(o.name){}

Zombie::~Zombie()
{
	std::cout << this->name << " suffered severe 🧠 damage...\n";
}

Zombie & Zombie::operator=(const Zombie &o)
{
	this->name = o.name;
	return (*this);
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

std::string	Zombie::getName(){ return (this->name); }
void		Zombie::setName(std::string name){ this->name = name; }

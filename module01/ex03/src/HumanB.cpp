#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::HumanB(const HumanB &o)
{

}

HumanB::~HumanB()
{

}

HumanB & HumanB::operator=(const HumanB &o)
{

}

void	HumanA::attack()
{
	std::cout << this->getName();
	std::cout << " attacks with their ";
	std::cout << this->weapon.getType();
}

#include "HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::HumanA(const HumanA &o)
{

}

HumanA::~HumanA()
{

}

HumanA & HumanA::operator=(const HumanA &o)
{

}

void		HumanA::setWeapon(Weapon weapon){ this->weapon = weapon; }
Weapon		HumanA::setgetWeapon(void){ return (this->weapon); }
void		HumanA::setsetName(std::string name){ this->name = name; }
std::string	HumanA::setgetName(void){ return (this->name); }

void	HumanA::attack()
{
	std::cout << this->getName();
	std::cout << " attacks with their ";
	std::cout << this->weapon.getType();
}

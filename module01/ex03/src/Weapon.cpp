#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(const Weapon &o)
	:type(o.type){}

Weapon::~Weapon(){}

Weapon & Weapon::operator=(const Weapon &o)
{
	this->type = o.type;
	return (*this);
}

const std::string&	Weapon::getType(){ return (this->type); };
void				Weapon::setType(const std::string type){ this->type = type; }

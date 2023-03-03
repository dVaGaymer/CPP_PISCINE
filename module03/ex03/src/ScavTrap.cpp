#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	:ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 0;
	this->_energyPoints = 0;
	this->_attackDamage = 0;
}

ScavTrap::ScavTrap(std::string const name)
	:ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 0;
	this->_energyPoints = 0;
	this->_attackDamage = 0;
}

ScavTrap::ScavTrap(ScavTrap const &o)
	:ClapTrap(o)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

void ScavTrap::attack(std::string const target)
{
	std::cout << "ScavTrap" << " ";
	std::cout << this->_name << " ";
	std::cout << "attack" << " ";
	std::cout << target << ", ";
	std::cout << "causing" << " ";
	std::cout << this->_attackDamage << " ";
	std::cout << "points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap" << " ";
	std::cout << this->_name << " ";
	std::cout << "has enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &o)
{
	this->_name = o._name;
	this->_hitPoints = o._hitPoints;
	this->_energyPoints = o._energyPoints;
	this->_attackDamage = o._attackDamage;
	return (*this);
}

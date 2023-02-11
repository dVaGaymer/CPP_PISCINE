#include "Harl.hpp"

Harl::Harl()
{
	this->_coments["DEBUG"] = &Harl::_debug;
	this->_coments["INFO"] = &Harl::_info;
	this->_coments["WARNING"] = &Harl::_warning;
	this->_coments["ERROR"] = &Harl::_error;

	this->_int_level["DEBUG"] = 1;
	this->_int_level["INFO"] = 2;
	this->_int_level["WARNING"] = 3;
	this->_int_level["ERROR"] = 4;
}

void	Harl::complain(std::string level)
{
	switch (_int_level[level])
	{
		case 1:
			(this->*(_coments["DEBUG"]))();
		case 2:
			(this->*(_coments["INFO"]))();
		case 3:
			(this->*(_coments["WARNING"]))();
		case 4:
			(this->*(_coments["ERROR"]))();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems\n";
	}
}

void	Harl::_debug()
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << "\n\n";
}
void	Harl::_info()
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\n\n";
}
void	Harl::_warning()
{
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << "\n\n";
}
void	Harl::_error()
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now." << "\n\n";
}

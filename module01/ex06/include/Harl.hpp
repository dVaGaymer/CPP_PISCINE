#pragma once
#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>
#include <map>

class Harl
{
	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();
		std::map<std::string, void (Harl::*)()>	_coments;
		std::map<std::string, int>				_int_level;

	public:
		Harl();
		void	complain(std::string level);
};
#endif


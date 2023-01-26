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

	public:
		Harl();
		std::map<std::string, void (Harl::*)()>	coments;
		void	complain(std::string level);
};
#endif


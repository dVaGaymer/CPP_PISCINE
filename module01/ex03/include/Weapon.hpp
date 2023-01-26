#pragma once
#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <string>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon();
		Weapon(const std::string type);

		void				setType(std::string type);
		const std::string&	getType();
};
#endif


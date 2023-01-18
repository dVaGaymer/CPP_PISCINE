#pragma once
#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <string>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon();
		Weapon(const Weapon &o);
		~Weapon();
		Weapon & operator=(const Weapon &o);

		void				setType(std::string type);
		const std::string&	getType();
};
#endif


#pragma once
#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

class HumanA
{
	private:
		Weapon	weapon;
		std::string	name;
	public:
		HumanA();
		HumanA(Weapon weapon);
		HumanA(Weapon weapon, std::string name);
		HumanA(const HumanA &o);
		~HumanA();
		HumanA & operator=(const HumanA &o);

		void	setWeapon(Weapon weapon);
		Weapon	getWeapon(void);
		void		setName(std::string name);
		std::string	getName(void);

		void	attack();
};
#endif


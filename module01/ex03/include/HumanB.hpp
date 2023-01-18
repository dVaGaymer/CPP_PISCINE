#pragma once
#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

class HumanB
{
	private:
		Weapon	weapon;
		std::string	name;
	public:
		HumanB();
		HumanB(std::string name);
		HumanB(const HumanB &o);
		~HumanB();
		HumanB & operator=(const HumanB &o);


		void	setWeapon(Weapon weapon);
		Weapon	getWeapon(void);
		void		setName(std::string name);
		std::string	getName(void);

		void	attack();
};
#endif


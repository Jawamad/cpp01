#ifndef WEAPON_HPP
#	define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string wpn);
		Weapon();
		~Weapon();
		const std::string& getType();
		void setType(std::string str);
};

#endif
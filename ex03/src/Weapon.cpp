#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string wpn)
{
	type = wpn;
}
Weapon::Weapon()
{
	
}
Weapon::~Weapon()
{

}
const std::string& Weapon::getType()
{
	return type;
}
void Weapon::setType(std::string str)
{
	type = str;
}
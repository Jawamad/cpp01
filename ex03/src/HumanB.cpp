#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string nme)
{
	weapon = NULL;
	name = nme;
}
HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon wp)
{
	weapon = &wp;
}

void HumanB::attack()
{
	std::cout << name << " attack with their ";
	if (weapon)
		std::cout << weapon->getType();
	else
		std::cout << "arms";
	std::cout <<std::endl;
}
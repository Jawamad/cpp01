#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string nme, Weapon& wpn) : weapon(wpn)
{
	name = nme;
}
HumanA::~HumanA()
{

}
void HumanA::attack()
{
	std::cout << name << " attack with their " << weapon.getType() << std::endl;
}
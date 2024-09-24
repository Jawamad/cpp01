#include "../inc/Zombie.hpp"

void Zombie::setname(std::string str)
{
	name =  str;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << " is destroy" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


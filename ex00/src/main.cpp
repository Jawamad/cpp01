#include "../inc/Zombie.hpp"

int main(void)
{
	Zombie *robert = newZombie("Robert");

	robert->announce();
	delete(robert);
	randomChump("Bernard");
	return (1);
}
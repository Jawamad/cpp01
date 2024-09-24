#include "../inc/Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(6, "regis");
	for (int i = 0; i < 6; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
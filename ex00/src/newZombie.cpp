#include "../inc/Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie *patient_0;

	patient_0 = new Zombie();
	patient_0->setname(name);
	return patient_0;
}

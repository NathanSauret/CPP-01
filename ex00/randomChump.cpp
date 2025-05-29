#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie	*randomZ;

	randomZ = newZombie(name);
	randomZ->announce();

	delete randomZ;
}

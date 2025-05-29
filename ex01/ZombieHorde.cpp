#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "Can't have <= 0 zombies created" << std::endl;
		exit(1);
	}
	
	Zombie	*horde = new Zombie[N];
	for (int i=0; i < N; i++)
	{
		horde[i].setName(name);
	}

	return (horde);
}

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int	N = 42;

	horde = zombieHorde(N, "clone");
	for (int i=0; i < N; i++)
	{
		std::cout << i << ": ";
		horde[i].announce();
	}

	delete[] horde;
	return (0);
}

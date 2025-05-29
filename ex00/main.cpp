#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z;

	std::cout << "~ LE Z ~" << std::endl;
	z = newZombie("le Z");
	z->announce();
	std::cout << std::endl;

	std::cout << "~ GO RANDY! ~" << std::endl;
	randomChump("randy");
	std::cout << std::endl;

	std::cout << "~ GOODBYE LE Z ;-( ~" << std::endl;
	delete z;
	return (0);
}

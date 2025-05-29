#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main( void )
{
	std::cout << "~ CREATE WEAPON1 ~" << std::endl;
	Weapon	weapon1("shotgun");
	std::cout << std::endl;

	std::cout << "~ CREATE WEAPON2 ~" << std::endl;
	Weapon	weapon2("Flamethrower");
	std::cout << std::endl;

	std::cout << "~ CREATE HUMAN A ~" << std::endl;
	HumanA	steve = HumanA("Steve", weapon1);
	steve.attack();
	std::cout << std::endl;

	std::cout << "~ CREATE HUMAN B WITHOUT WEAPON ~" << std::endl;
	HumanB	fred = HumanB("Fred");
	fred.attack();
	std::cout << std::endl;

	std::cout << "~ CREATE HUMAN B WITH WEAPON ~" << std::endl;
	HumanB	bob = HumanB("bob");
	bob.setWeapon(weapon2);
	bob.attack();
	std::cout << std::endl;

	std::cout << "~ DESTRUCTORS ~" << std::endl;

	return (0);
}

// int main()
// {
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanA bob("Bob", club);
// 		bob.attack();
// 		club.setType("some other type of club");
// 		bob.attack();
// 	}
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanB jim("Jim");
// 		jim.setWeapon(club);
// 		jim.attack();
// 		club.setType("some other type of club");
// 		jim.attack();
// 	}

// 	return 0;
// }
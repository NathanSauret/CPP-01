#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "humanA " << _name << " with weapon " << _weapon.getType() << " created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "humanA " << _name << " with weapon " << _weapon.getType() << " deleted" << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

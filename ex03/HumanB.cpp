#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "humanB " << _name << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "humanB " << _name << " deleted" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	std::cout << "give " << (*_weapon).getType() << " to " << _name << std::endl;
}

void	HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << " can't attack without a weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

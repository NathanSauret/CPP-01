#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	setType(type);
	std::cout << "weapon of type " << _type << " created" << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << "weapon of type " << _type << " deleted" << std::endl;
}

void	Weapon::setType( std::string type )
{ 
	_type = type;
}

std::string	Weapon::getType()
{ 
	return (_type);
}

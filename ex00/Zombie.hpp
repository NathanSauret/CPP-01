#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

// Includes
#include <iostream>
#include <string>


class Zombie
{
private:
	std::string	_name;

public:
	Zombie( std::string name );
	~Zombie();

	
	void announce( void );
};

Zombie	*newZombie(std::string name);
void	randomChump( std::string name );

#endif
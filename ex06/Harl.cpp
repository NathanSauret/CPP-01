#include <iostream>
#include <string>
#include "Harl.hpp"

void	Harl::debug( void ) const
{
	std::cout << "[DEBUG]> La vie c'est comme une boîte de chocolats, on ne sait jamais sur quoi on va tomber." << std::endl;
}

void	Harl::info( void ) const
{
	std::cout << "[INFO]> RTFM ¯\\_(ツ)_/¯" << std::endl;
}

void	Harl::warning( void ) const
{
	std::cout << "[WARNING]> It's dangerous to go alone! Take this." << std::endl;
}

void	Harl::error( void ) const
{
	std::cout << "[ERROR]> Le problème se situe toujours entre la chaise et le clavier." << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level) const
{
	const function_p	complains[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*(complains[i]))();
			return ;
		}
	}
	std::cout << "Error: can't find your level" << std::endl;
}

#include "Harl.hpp"

int	getLevel(std::string level)
{
	const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					levelN = 4;

	for (int i = 0; i < 4 && levelN == 4; i++)
	{
		if (level == levels[i])
			levelN = i;
	}
	return (levelN);
}

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "Error: must have 1 parameter" << std::endl;
		return (1);
	}
	switch (getLevel(argv[1]))
	{
		case 0:
			harl.complain("DEBUG");
			break;
		case 1:
			harl.complain("INFO");
			break;
		case 2:
			harl.complain("WARNING");
			break;
		case 3:
			harl.complain("ERROR");
			break;
		default :
			std::cout << "[ Continue de parler, tu me sers de bruit blanc pour dormir... ]" << std::endl;
	}
	return (0);
}

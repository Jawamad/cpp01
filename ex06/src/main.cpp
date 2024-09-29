#include "../inc/Harl.hpp"

int	main(int argc, char **arg) {
	int level = 5;

	if (argc != 2)
	{
		std::cout << "Harld need only one information to start his complain." << std::endl;
		return 1;
	}

	Harl	harl;

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i <= 3; i++)
	{
		if (arg[1] == levels[i])
		{
			level = i;
			break;
		}
	}
	
	switch (level)
	{
		case 0:
			harl.complain("DEBUG");
			std::cout << std::endl;
			// fallthrough
		case 1:
			harl.complain("INFO");
			std::cout << std::endl;
			// fallthrough
		case 2:
			harl.complain("WARNING");
			std::cout << std::endl;
			// fallthrough
		case 3:
			harl.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			harl.complain("");
			std::cout << std::endl;
	}

	return 0;
}	
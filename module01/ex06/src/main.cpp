#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	h;

	if (argc != 2)
	{
		std::cout << "Harl is making unintelligible sounds.\n";
		return (-1);
	}
	h.complain(*(argv + 1));
	return (0);
}

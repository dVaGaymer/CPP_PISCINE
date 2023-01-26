#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	h;

	if (argc != 2)
	{
		std::cout << "Harl is not complaining, It must be dead.";
		return (0);
	}
	h.complain(*(argv + 1));
	return (0);
}

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	h;

	(void)argv;
	if (argc != 1)
		return (-1);
	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
	h.complain("INFO");
	return (0);
}

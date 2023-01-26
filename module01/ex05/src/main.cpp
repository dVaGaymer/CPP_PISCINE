#include "Harl.hpp"

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	h;

	(void)argv;
	if (argc != 1)
		return (0);
	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("INFO");
	h.complain("ERROR");
	return (0);
}

#include "Zombie.hpp"
#define N 15

void	announceHorde(Zombie *horde)
{
	for(int i = 0; i < N; i++)
		horde[i].announce();
}

int	main(int argc, char **argv)
{
	Zombie*	horde;
	(void)argc;(void)argv;

	horde = zombieHorde(N, "Julian");
	announceHorde(horde);
	delete[] horde;
	return (0);
}

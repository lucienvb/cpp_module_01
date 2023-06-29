#include <Zombie.hpp>

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	uint32_t	N = 8;
	std::string	name = "zombieName";
	Zombie		*horde;

	horde = zombieHorde(N, name);

	for (uint32_t i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}

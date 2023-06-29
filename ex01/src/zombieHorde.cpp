#include <Zombie.hpp>

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde = new Zombie[N];

	for (uint32_t i = 0; i < (uint32_t) N; i++)
		zombieHorde[i] = Zombie(name);
	return (zombieHorde);
}

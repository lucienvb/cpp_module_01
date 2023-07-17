#include <Zombie.hpp>

// 1) Creates zombieHorde allocated for a count of N.
// 2) Assigning every zombie in zombieHorde with given name.
Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde = new Zombie[N];

	for (uint32_t i = 0; i < (uint32_t) N; i++)
		zombieHorde[i] = Zombie(name);
	return (zombieHorde);
}

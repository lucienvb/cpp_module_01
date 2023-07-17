#include <Zombie.hpp>

// Creates randomChump on the stack and prints out its message.
void	randomChump(std::string name) {
	Zombie z(name);
	z.announce();
}

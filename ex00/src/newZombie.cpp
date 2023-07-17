#include <Zombie.hpp>

// Creates a zombie on the heap using new.
Zombie	*newZombie(std::string name) {
	return (new Zombie(name));
}

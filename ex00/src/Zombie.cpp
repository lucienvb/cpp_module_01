#include <Zombie.hpp>

void	Zombie::announce(void) const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
	_name = name;
}

Zombie::~Zombie() {
}

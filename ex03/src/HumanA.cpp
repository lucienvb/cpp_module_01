#include <HumanA.hpp>

HumanA::HumanA(const std::string& name, const Weapon& type)
	:_weapon(type) {
	_name = name;
}

HumanA::~HumanA() {
}

void	HumanA::attack() const {
	std::cout << _name << " attacks with their "
	<< _weapon.getType() << std::endl;
}

#include <HumanA.hpp>

// Constructor with initialization of type and name.
// Because type is a reference it needs to be initialized
// in the following format before the curly brackets: `:_weapon(type)`
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

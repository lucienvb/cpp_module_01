#include <HumanB.hpp>

// constructor with initialization of name and weapon
// to nullptr (because weapon is a pointer)
HumanB::HumanB(const std::string& name) {
	_name = name;
	_weapon = nullptr;
}

HumanB::~HumanB() {
}

void	HumanB::attack() const {
	if (_weapon != nullptr)
	{
		std::cout << _name << " attacks with their "
				  << _weapon->getType() << std::endl;
	}
	else
	{
		std::cout << _name << " has no weapon to attack with"
				<< std::endl;
	}
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

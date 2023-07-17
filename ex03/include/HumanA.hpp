#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <Weapon.hpp>

// This is a class containing a constructor (with name and
// weapon initialization), destructor and one method:
// - attack
//
// It also has the private variables:
// - name
// - weapon with a reference
class	HumanA {
public:
	HumanA(const std::string& name, const Weapon& type);
	~HumanA();
	void	attack() const;

private:
	std::string		_name;
	const Weapon&	_weapon;
};

#endif

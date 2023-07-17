#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <Weapon.hpp>

// This is a class containing a constructor (with name
// initialization), destructor and two methods:
// - attack
// - setWeapon
//
// It also has to private variables:
// - name
// - weapon with a pointer because it does not need to be set
// when constructing
class	HumanB	{
public:
	HumanB(const std::string& name);
	~HumanB();

	void	attack() const;
	void	setWeapon(Weapon& weapon);

private:
	std::string _name;
	Weapon*		_weapon;
};

#endif

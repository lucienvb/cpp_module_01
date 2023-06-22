#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <Weapon.hpp>

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

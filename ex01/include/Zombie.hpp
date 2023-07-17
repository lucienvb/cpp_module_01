#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

// Constructor, constructor with name, destructor and method
// that prints a message.
class Zombie {
public:

	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void) const;

private:
	std::string	_name;
};

#endif

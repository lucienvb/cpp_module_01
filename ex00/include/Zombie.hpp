#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

// Constructor, destructor and a method that prints a message
class Zombie {
public:

	Zombie(std::string name);
	~Zombie();
	void	announce(void) const;

private:
	std::string	_name;
};

#endif

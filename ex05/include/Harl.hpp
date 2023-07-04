#ifndef HARL_HPP
#define HARL_HPP

// INCLUDES
#include <iostream>
#include <string>

// In this class the key `using` is used to create an alias for
// a function pointer type.
// In the following line this function pointer type is used to get
// the complainFunction of choice.
class	Harl {
public:
	Harl();
	~Harl();

	void	complain(std::string level);

private:
	using				complainFunction = void (Harl::*)();
	complainFunction	getComplainFunction(const std::string& level);
	void				debug(void);
	void				info(void);
	void				warning(void);
	void				error(void);

};

#endif

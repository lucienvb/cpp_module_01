#ifndef HARL_HPP
#define HARL_HPP

// INCLUDES
#include <iostream>
#include <string>

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

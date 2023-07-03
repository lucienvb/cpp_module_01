#include <Harl.hpp>

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. "
				 "I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. "
				 "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
				 << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
				 "years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::complainFunction	Harl::getComplainFunction(const std::string& level) {
	switch (level[0]) {
		case 'd':
			return (&Harl::debug);
		case 'i':
			return (&Harl::info);
		case 'w':
			return (&Harl::warning);
		case 'e':
			return (&Harl::error);
		default:
			return (nullptr);
	}

}

void	Harl::complain(std::string level) {
	complainFunction	complainFunc = getComplainFunction(level);

	if (complainFunc)
		(this->*complainFunc)();
	else
		std::cout << "Invalid level" << std::endl;
}

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

// This function is used to get the complainFunction of choice.
// It uses a switch-case statement on the first character of the
// string and returns the corresponding function. When the first
// character is invalid, a nullptr is returned.
Harl::complainFunction	Harl::getComplainFunction(const std::string& level) {
	switch (level.at(0)) {
		case 'D':
			return (&Harl::debug);
		case 'I':
			return (&Harl::info);
		case 'W':
			return (&Harl::warning);
		case 'E':
			return (&Harl::error);
		default:
			return (nullptr);
	}

}

// getComplainFunction is used for getting the given complain
// function. If this isn't a nullptr it is executed. Otherwise,
// it will output an error message.
void	Harl::complain(std::string level) {
	complainFunction	complainFunc = getComplainFunction(level);

	if (complainFunc)
		(this->*complainFunc)();
	else
		std::cout << "Invalid level" << std::endl;
}

#include <Harl.hpp>

int	main(void) {
	Harl	test;

	test.complain("DEBUG");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("ERROR");
//	system("leaks harl");
	return (0);
}

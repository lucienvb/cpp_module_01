#include <Weapon.hpp>

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		std::string	type = club.getType();

		std::cout << type << std::endl;
//		HumanA bob("Bob", club);
//		bob.attack();
//		club.setType("some other type of club");
//		bob.attack();
	}
	{
//		Weapon club = Weapon("crude spiked club");
//		HumanB jim("Jim");
//		jim.setWeapon(club);
//		jim.attack();
//		club.setType("some other type of club");
//		jim.attack();
	}
	return 0;
}

//int	main(void)
//{
//	Weapon		club = Weapon("crude spiked club");
//	std::string	club;
//
//	person.setType("club");
//
//}

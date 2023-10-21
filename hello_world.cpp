#include <iostream>

int main(int argc, char **argv)
{
	// Prevent the compiler from complaining about the unused parameters
	(void) argc;
	(void) argv;

	std::string name;
	std::cout << "What's your name? ";
	std::cin >> name;
	
	std::cout << "Hello, world from " << name << "!" << std::endl;

	return 0;
}

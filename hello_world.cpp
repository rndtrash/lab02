#include <iostream>

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	std::string name;
	std::cout << "What's your name? ";
	std::cin >> name;
	
	std::cout << "Hello, world from " << name << "!" << std::endl;

	return 0;
}

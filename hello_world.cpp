#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	std::string name;
	cout << "What's your name? ";
	cin >> name;
	
	cout << "Hello, world from " << name << "!" << endl;

	return 0;
}

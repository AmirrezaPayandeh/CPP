#include <iostream>

// Variables
void Variables();

// Functions
void Function();
void Function(int);

int main()
{
	// Variables
	Variables();

	std::cout << "\n############################################\n" << std::endl;

	// Functions
	Function();
	std::cout << "========================================" << std::endl;
	Function(5);

	std::cout << "\n############################################\n" << std::endl;

	std::cin.get();
}
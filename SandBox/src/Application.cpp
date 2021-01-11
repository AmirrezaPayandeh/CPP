#include <iostream>

// Headers
void HeaderFunction();

// Variables
void Variables();

// Functions
void Function();
void Function(int);

int main()
{
	// Variables
	std::cout << "Variables:" << std::endl;
	Variables();
	std::cout << "\n############################################\n" << std::endl;

	// Functions
	std::cout << "Functions:" << std::endl;
	Function();
	std::cout << "========================================" << std::endl;
	Function(5);
	std::cout << "\n############################################\n" << std::endl;

	// Headers
	std::cout << "Headers:" << std::endl;
	HeaderFunction();

	std::cin.get();
}
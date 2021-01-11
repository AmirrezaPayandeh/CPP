#include <iostream>

// Headers
void HeaderFunction();

// Variables
void Variables();

// Functions
void Function();
void Function(int);

// Conditions
void Conditions();

// Loops
void Loop1(int);
void Loop2(int);
void Loop3(int);

// Pointers
void Pointers();

// Classes, Structs
#include "Classes_Structs\Classes_Structs.cpp"



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
	std::cout << "\n############################################\n" << std::endl;

	// Conditions
	std::cout << "Conditions:" << std::endl;
	Conditions();
	std::cout << "\n############################################\n" << std::endl;

	// Loops
	std::cout << "Loops:" << std::endl;
	Loop1(5);
	Loop2(0);
	Loop3(0);
	std::cout << "\n############################################\n" << std::endl;

	// Pointers
	std::cout << "Pointers:" << std::endl;
	Pointers();
	std::cout << "\n############################################\n" << std::endl;

	// Classes, Structs
	MyTestClass testClass;
	MyTestStruct testStruct;
	std::cout << "Class properties: " << std::endl;
	std::cout << "Access denied!\n" << std::endl;
	std::cout << "Struct properties: " << std::endl;
	testStruct.Print();
	// calling testClass.Print() is invalid.
	std::cout << "\n############################################\n" << std::endl;



	std::cin.get();
}
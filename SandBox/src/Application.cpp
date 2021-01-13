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

// Static
#include "Static\Static.cpp"
int MyStaticClass::sharedInt;
void LocalStaticFunc();

// Enums
#include "Enums\Enums.cpp"

// Constructors
#include "Constructors\Constructors.cpp"

// Inheritance
#include "Inheritance\Inheritance.cpp"

// Visibility
#include "Visibility\Visibility.cpp"

// Arrays
#include "Arrays\Arrays.cpp"

// Strings
#include "Strings\Strings.cpp"

// String Literals
#include "StringLiterals\StringLiterals.cpp"


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
	std::cout << "Classes, Structs: " << std::endl;
	std::cout << "Class properties: " << std::endl;
	MyTestClass testClass;
	std::cout << "Access denied!\n" << std::endl; // calling testClass.Print() is invalid.

	std::cout << "Struct properties: " << std::endl;
	MyTestStruct testStruct;
	testStruct.Print();
	std::cout << "\n############################################\n" << std::endl;

	// Static Word
	std::cout << "Static Word:" << std::endl;
	MyStaticClass::sharedInt++;
	MyStaticClass::sharedInt++;
	MyStaticClass::Print();
	LocalStaticFunc();
	LocalStaticFunc();
	LocalStaticFunc();
	std::cout << "\n############################################\n" << std::endl;

	// Enums
	std::cout << "Enums:" << std::endl;
	MyTestEnum myEnum = B;
	std::cout << "myEnum = " << myEnum << std::endl;
	std::cout << "\n############################################\n" << std::endl;

	// Constructors
	std::cout << "Constructors:" << std::endl;
	{
		MyConstructorClass myConstructor;
	}
	std::cout << "\n############################################\n" << std::endl;

	// Inheritance
	std::cout << "Inheritance, Interface:" << std::endl;
	ClassB b;
	b.IncreamentValue();
	b.Print();
	std::cout << "\n############################################\n" << std::endl;

	// Visibility
	std::cout << "Visibility:" << std::endl;
	VisibilityClassB classB;
	classB.Print();
	std::cout << "\n############################################\n" << std::endl;

	// Arrays
	std::cout << "Arrays:" << std::endl;
	ArrayClass myArray;
	myArray.Print();
	std::cout << "\n############################################\n" << std::endl;

	// Strings
	std::cout << "Strings:" << std::endl;
	Strings string;
	string.Print();
	std::cout << "\n############################################\n" << std::endl;
	
	// String Literals
	std::cout << "String Literals:" << std::endl;
	StringLiterals st;
	st.Print();
	std::cout << "\n############################################\n" << std::endl;



	std::cin.get();
}
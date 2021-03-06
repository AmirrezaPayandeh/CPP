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

// Const
#include "Const\Const.h"

// Mutable
void MutablePrint();

// Member Initializer List
#include "MemberInitializerList\MemberInitializerList.cpp"

// Ternary Operators
void TernaryOperatorsPrint();

// Instantiation
void InstantiationPrint();

// New
void NewPrint();

// Implicit Conversion
void ImplicitPrint();

// Operators
void OperatorPrint();

// This

// ObjectLifetime
void ObjectLifetimePrint();

// Smart Pointers
void SmartPointerPrint();

// Copy Constructors
void CopyConstructorPrint();

// Vectors
void VectorPrint();

// 	Multiple Return Values
void MultipleReturnPrint();

// Templates
void TemplatePrint();


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

	// Const
	std::cout << "Const:" << std::endl;
	ConstPrint();
	ConstEntity ce;
	PrintConstEntity(ce);
	std::cout << "\n############################################\n" << std::endl;

	// Mutable
	std::cout << "Mutable:" << std::endl;
	MutablePrint();
	std::cout << "see documentation page 'Mutable\\Mutable.cpp'" << std::endl;
	std::cout << "\n############################################\n" << std::endl;

	// Member Initializer List
	std::cout << "Member Initializer List:" << std::endl;
	MemberInitializerList MIL;
	std::cout << "\n############################################\n" << std::endl;

	// Ternary Operators
	std::cout << "Ternary Operators:" << std::endl;
	TernaryOperatorsPrint();
	std::cout << "\n############################################\n" << std::endl;

	// Instantiation
	std::cout << "Instantiation:" << std::endl;
	InstantiationPrint();
	std::cout << "see documentation page 'Instantiation\\Instantiation.cpp'" << std::endl;
	std::cout << "\n############################################\n" << std::endl;

	// New
	std::cout << "New:" << std::endl;
	NewPrint();
	std::cout << "\n############################################\n" << std::endl;

	// Implicit Conversion
	std::cout << "Implicit Conversion:" << std::endl;
	ImplicitPrint();
	std::cout << "\n############################################\n" << std::endl;

	// Operators
	std::cout << "Operators:" << std::endl;
	OperatorPrint();
	std::cout << "\n############################################\n" << std::endl;

	// This
	std::cout << "This:" << std::endl;
	std::cout << "see documentation page 'This\\This.cpp'" << std::endl;
	std::cout << "\n############################################\n" << std::endl;

	// ObjectLifetime
	std::cout << "This:" << std::endl;
	ObjectLifetimePrint();
	std::cout << "\n############################################\n" << std::endl;

	// Smart Pointers
	std::cout << "Smart Pointers:" << std::endl;
	SmartPointerPrint();
	std::cout << "\n############################################\n" << std::endl;

	// Copy Constructors
	std::cout << "Copy Constructors:" << std::endl;
	CopyConstructorPrint();
	std::cout << "\n############################################\n" << std::endl;

	// Vectors
	std::cout << "Vectors:" << std::endl;
	VectorPrint();
	std::cout << "\n############################################\n" << std::endl;

	// Multiple Return Values
	std::cout << "Multiple Return Values:" << std::endl;
	MultipleReturnPrint();
	std::cout << "\n############################################\n" << std::endl;

	// Templates
	std::cout << "Templates:" << std::endl;
	TemplatePrint();
	std::cout << "\n############################################\n" << std::endl;


	std::cin.get();
}
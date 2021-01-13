// Const

#include <iostream>
#include "Const.h"

void ConstPrint()
{
	// by putting a 'const' in front of a variable declaration, we are not allowed to change the content of
	// that variable later on.
	const int var1 = 5;

	// for pointers if you put 'const' before '*', you are not able to change the content of where the pointer
	// is pointing at. but you can change the pointer itself.
	const int* var2 = new int;
	//*var2 = 5; // this is invalid
	var2 = &var1;

	// if you put 'const' after '*', you are not able to change the pointer to where it's pointing to.
	int* const var3 = new int;
	*var3 = 5;
	//var3 = new int; // this is invalid
}


// if you remove const from front of the GetX() func, you are not allowed to write code as follow
void PrintConstEntity(const ConstEntity& e)
{
	std::cout << "We are able to invoke GetX(), because it's marked as const: " << e.GetX() << std::endl;
}
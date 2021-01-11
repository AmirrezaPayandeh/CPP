// Functions

#include <iostream>

/*
 * in c++ you can declare a function in a file and use it anywhere, but remember to define it in your project,
 * or link an external lib to your project so that linker can find and use it when you invoke your function.
 * 
 * you can declare a function multiple times, but there must be a uniq definition for a function, otherwise you
 * will get a liking error.
 * 
 * a function can have 0 or only 1 return type(value). see MultipleReturn folder for different ways of returning
 * multiple types(values) for a function
 * 
 * use functions in your program to reduce code redundancy.
 */
void Function(); // you can declare a function multiple times
void Function(); // function declaration is optional if there is already a definition in your page

void Function() // function definition must be uniq
{
	std::cout << "body of function" << std::endl;
}


void Function(int); // on a function decleration, naming parameters is optional

void Function(int value) // you can overload a function with the same name
{
	for (int i = 0; i < value; i++)
		std::cout << "Loop: " << i << std::endl;
}


/*
 * if a function returns something, must always return specified type. the only exeption for this rule
 * is 'main' function (entry point).
 */
float Function(float f)
{
	// if you remove return, you will get a compiler error
	return f;
}
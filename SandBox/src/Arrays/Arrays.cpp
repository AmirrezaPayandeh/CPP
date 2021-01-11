// Arrays

#include <iostream>

/*
 * arrays are just pointers. an array variable points to beginning of the array in memory.
 */
class ArrayClass
{
public:
	int example[5];
	ArrayClass()
	{
		for (int i = 0; i < 5; i++)
			example[i] = 2;
	}
	void Print()
	{
		std::cout << "example address: " << example << std::endl;

		// adding 2 to example means, get the type of example (which is int) multiply it by 2 (2*4)
		// and add result (8) to example. then derefrence it and set it to whatever you want.
		*(example + 2) = 6; // can also be writen like this:
		//*(int*)((char*)example + 8) = 6;
		std::cout << example[2] << std::endl;
	}
};
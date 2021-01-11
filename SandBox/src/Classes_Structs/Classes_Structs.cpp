// Classes, Structs

#include <iostream>

/*
 * classes and structs are used to organize our data structures. there is only 1 difference betweet
 * class and struct. A class funcs and vars are private by default whereas a struct funcs and vars
 * are public by default (visibility is explained in Visibility folder)
 */

class MyTestClass
{
	// private:
	int a = 1, b = -1;
	void Print()
	{
		std::cout << "a = " << a << ", b = " << b << std::endl;
	}

	// sizeof(MyTestClass) = 8 byte
};

struct MyTestStruct
{
	// public:
	int a = 1, b = -1;
	void Print()
	{
		std::cout << "a = " << a << ", b = " << b << std::endl;
	}

	// sizeof(MyTestStruct) = 8 byte
};
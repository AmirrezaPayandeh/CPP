// Static Word

#include <iostream>

/*
 * using word 'static' inside a class or struct means, all class or struct instances of that class
 * have access to that function or variable.
 * 
 * using word 'static' in a translation unit means, that function or variable is accessible only
 * inside of that translation unit.
 * 
 * local static is used to make a variable spesific to a block of code.
 */


// these variable and function are only accessible inside of this file
static int myVar = 5;
static int Multiply(int a, int b)
{
	return a * b;
}

// 'static' word for a variable inside a class or struct will allow us to us them without making an instance of the clas
class MyStaticClass
{
public:
	// default value of this variable is 0
	static int sharedInt;

	MyStaticClass() {}
	~MyStaticClass() {}
	static void Print()
	{
		std::cout << "shared int = " << sharedInt << std::endl;
	}
};

// each time you call this function 'value' will increament by 1
static void LocalStaticFunc()
{
	// local static
	static int value = 0;
	value++;
	std::cout << "value = " << value << std::endl;
}
// Strings

#include <iostream>
#include <string>

/*
 * strings are arrays of characters in C++. in C we can use char* to represent a string. we can also use that
 * in C++. but there is already a string library for C++ that we can use and it is 'string'.
 * 
 * it is common to use const with a char* so that we can not change it.
 */
class Strings
{
public:
	void Print()
	{
		const char* myString1 = "Hello";
		std::cout << "myString1 = " << myString1 << std::endl;

		// strings also can be represented as follow
		char myString2[] = "C++";
		// or like this:
		//char myString2[] = { 'C', '+', '+', 0};
		std::cout << "myString2 = " << myString2 << std::endl;
		myString2[0] = 'c';
		std::cout << "myString2 changed to -> " << myString2 << std::endl;

		std::string myString3 = std::string("Hello") + " World!";
		std::cout << "myString3 = " << myString3 << std::endl;
	}
};
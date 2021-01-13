// String Literals

#include <iostream>

/*
 * String literals are strings inside "". they are const char* by default and not a const char[].
 */
class StringLiterals
{
public:
	void Print()
	{
		// this is a 4 byte character and not a 3 byte character. compiler should know where an string
		// ends. an string ends with '0' (inside of memory). you can end a string manually by putting
		// a '\0' anywhere in the string.
		"C++";
		const char* language = "C++"; // 1 byte character
		const char* name = "Hello Wo\0rld!";
		std::cout << "name = " << name << std::endl;


		// this is an undefined behavior. there is no definition in standard C++ to explain what should
		// happen to this line. MSVC does not complain about this, but in releas mode, it will do nothing
		// and in debug mode, it will throw an exeption.
		// char* name2 = (char*)"Hello";
		// name2[1] = 'a';
		// std::cout << "name2 = " << name2 << std::endl;

		// if you want to modify that you should define it as an array:
		char name3[] = "Hello";
		name3[1] = 'a';
		std::cout << "name3 = " << name3 << std::endl;


		// types of strings are:
		const char* ex1 = u8"Hello"; // u8 is optional
		const wchar_t* ex2 = L"Hello"; // 2-4 byte character
		const char16_t* ex3 = u"Hello"; // 2 byte character
		const char32_t* ex4 = U"Hello"; // 4 byte character


		// to add 2 strings together we don't need '+'
		const char* example1 = "Hello" " World!";
		std::cout << "example1 = " << example1 << std::endl;

		// you can also use 'R' before an string literal to format it as below
		const char* example2 = R"(Line1
	   Line2
	   Line3)";
		std::cout << "example2 = " << example2 << std::endl;
	}
};
// Variables

#include <iostream>

void Variables()
{
	std::cout << "========================================" << std::endl;
	/*
	 * bool:
	 * size = 1 byte (8 bits)
	 * 0 -> false, anything else -> true
	 * unsigned cannot be used with type 'bool'
	 */
	std::cout << "bool:" << std::endl;
	bool myBool = true;
	std::cout << "size of bool: " << sizeof(bool) << " byte(s)" << std::endl;
	std::cout << "myBool = " << myBool << std::endl; // prints 1 or 0 to the console
	std::cout << "========================================" << std::endl;


	/*
	 * char:
	 * size = 1 byte (8 bits)
	 * from -128 -> +127
	 * with unsigned: from 0 -> 255
	 *
	 * A -> Z = 65 -> 90
	 * a -> z = 97 -> 122
	 *
	 * to get to a lower case from upper case you can add 32 to the letter:
	 * 'A' + 32 = 'a'
	 * 'G' + 32 = 'g'
	 */
	std::cout << "char:" << std::endl;
	char myChar1 = 'A';
	char myChar2 = 65;
	std::cout << "size of char: " << sizeof(char) << " byte(s)" << std::endl;
	std::cout << "myChar1 = " << myChar1 << ", myChar2 = " << myChar2 << std::endl;
	std::cout << "========================================" << std::endl;



	/*
	 * wchar_t:
	 * size = 2-4 byte (16-32 bits)
	 * unsigned cannot be used with type 'wchar_t'
	 */
	std::cout << "wchar_t:" << std::endl;
	wchar_t myWChar = 'A';
	std::cout << "size of wchar_t: " << sizeof(wchar_t) << std::endl;
	std::cout << "myWChar = " << myWChar << std::endl;
	std::cout << "========================================" << std::endl;


	/*
	 * short:
	 * size = 2 byte (16 bits)
	 * from -32,768 -> +32,767
	 * with unsigned: from 0 -> 65,535
	 */
	std::cout << "short:" << std::endl;
	short myShort1 = -32768;
	unsigned short myShort2 = 65535;
	std::cout << "size of short: " << sizeof(short) << " byte(s)" << std::endl;
	std::cout << "myShort1 = " << myShort1 << ", myShort2 = " << myShort2 << std::endl;
	std::cout << "========================================" << std::endl;


	/*
	 * int:
	 * size = 4 byte (32 bits)
	 * from -2,147,483,648 -> +2,147,483,647
	 * with unsigned: from 0 -> 4,294,967,295
	 */
	std::cout << "int:" << std::endl;
	int myInt1 = -2147483648;
	unsigned int myInt2 = 4294967295;
	std::cout << "size of int: " << sizeof(int) << " byte(s)" << std::endl;
	std::cout << "myInt1 = " << myInt1 << ", myInt2 = " << myInt2 << std::endl;
	std::cout << "========================================" << std::endl;


	/*
	 * long:
	 * size = 4 byte (32 bits)
	 * from -2,147,483,648 -> +2,147,483,647
	 * with unsigned: from 0 -> 4,294,967,295
	 */
	std::cout << "long:" << std::endl;
	long myLong1 = -2147483648;
	unsigned long myLong2 = 4294967295;
	std::cout << "size of long: " << sizeof(long) << " byte(s)" << std::endl;
	std::cout << "myLong1 = " << myLong1 << ", myLong2 = " << myLong2 << std::endl;
	std::cout << "========================================" << std::endl;


	/*
	 * long long:
	 * size = 8 byte (64 bits)
	 * from -9,223,372,036,854,775,807 -> +9,223,372,036,854,775,808
	 * with unsigned: from 0 -> 18,446,744,073,709,551,615
	 */
	std::cout << "long long:" << std::endl;
	long long myLongLong1 = -9223372036854775807;
	unsigned long long myLongLong2 = 18446744073709551615;
	std::cout << "size of long long: " << sizeof(long long) << " byte(s)" << std::endl;
	std::cout << "myLongLong1 = " << myLongLong1 << ", myLongLong2 = " << myLongLong2 << std::endl;
	std::cout << "========================================" << std::endl;


	/*
	 * float:
	 * size = 4 byte (32 bits)
	 * unsigned cannot be used with type 'float'
	 * 
	 * you must type 'f' after a float number so that compliler knows the number type is float,
	 * otherwise it will be considered as decimal.
	 */
	std::cout << "float:" << std::endl;
	float myFloat1 = -15.5f;
	float myFloat2 = 0.0f;
	std::cout << "size of float: " << sizeof(float) << " byte(s)" << std::endl;
	std::cout << "myFloat1 = " << myFloat1 << ", myFloat2 = " << myFloat2 << std::endl;
	std::cout << "========================================" << std::endl;


	/*
	 * double:
	 * size = 8 byte (64 bits)
	 * unsigned cannot be used with type 'double'
	 */
	std::cout << "float:" << std::endl;
	double myDouble1 = -273.5;
	double myDouble2 = 0.0;
	std::cout << "size of double: " << sizeof(double) << " byte(s)" << std::endl;
	std::cout << "myDouble1 = " << myDouble1 << ", myDouble2 = " << myDouble2 << std::endl;
	std::cout << "========================================" << std::endl;


	/*
	 * void:
	 * size = n byte (n*8 bits)
	 * unsigned cannot be used with type 'void'
	 * 
	 * we can not declare a simple variable with void, but it is possible to declare a void pointer
	 * that can refer to another variable.
	 */
	std::cout << "void:" << std::endl;
	void* myVoid;
	myVoid = &myBool;
	std::cout << "myVoid address: " << myVoid << std::endl;
	myVoid = &myInt1;
	std::cout << "myVoid address: " << myVoid << std::endl;
	std::cout << "========================================" << std::endl;
}
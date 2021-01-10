// Variables

#include <iostream>

void Variables()
{
	std::cout << "========================================" << std::endl;
	/*
	 * boolean:
	 * size = 1 byte (8 bits)
	 * 0 -> false, anything else -> true
	 * unsigned cannot be used with type 'bool'
	 */
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
	char myChar1 = 'A';
	char myChar2 = 65;
	std::cout << "size of char: " << sizeof(char) << " byte(s)" << std::endl;
	std::cout << "myChar1 = " << myChar1 << ", myChar2 = " << myChar2 << std::endl;
	std::cout << "========================================" << std::endl;


	/*
	 * short:
	 * size = 2 byte (16 bits)
	 * from -32,768 -> +32,767
	 * with unsigned: from 0 -> 65,535
	 */
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
	long myLong1 = -2147483648;
	unsigned long myLong2 = 4294967295;
	std::cout << "size of long: " << sizeof(long) << " byte(s)" << std::endl;
	std::cout << "myLong1 = " << myLong1 << ", myLong2 = " << myLong2 << std::endl;
	std::cout << "========================================" << std::endl;


	/*
	 * long:
	 * size = 8 byte (64 bits)
	 * from -9,223,372,036,854,775,807 -> +9,223,372,036,854,775,808
	 * with unsigned: from 0 -> 18,446,744,073,709,551,615
	 */
	long long myLongLong1 = -9223372036854775807;
	unsigned long long myLongLong2 = 18446744073709551615;
	std::cout << "size of long long: " << sizeof(long long) << " byte(s)" << std::endl;
	std::cout << "myLongLong1 = " << myLongLong1 << ", myLongLong2 = " << myLongLong2 << std::endl;
	std::cout << "========================================" << std::endl;
}
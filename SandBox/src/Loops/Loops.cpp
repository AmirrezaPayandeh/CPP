// Loops

#include <iostream>

/*
 * loops are used to execute a block of code multiple times. there are different types of loop:
 * 'for', 'while' and 'do while'
 */

// implemented with 'for' loop
void Loop1(int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << i << ", ";
	}
	std::cout << std::endl;

	// you can make an infinite loop with 'for' loop like this:
	/*
	for (; true;)
	{
		// infinite loop
	}
	*/
}

// implemented with 'while' loop
void Loop2(int count)
{
	int i = 0;
	while (i < count)
	{
		std::cout << i << ", ";
		i++;
	}
	std::cout << std::endl;
}

// implemented with 'do while' loop
void Loop3(int count)
{
	int i = 0;
	do
	{
		std::cout << i << ", ";
		i++;
	} while (i < count);
	std::cout << std::endl;
}
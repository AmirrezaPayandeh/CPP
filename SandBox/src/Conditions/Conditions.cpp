// Conditions

#include <iostream>

/*
 * in c++, we can have blocks that when the program run into that block, it start executing that code.
 * if we need to run a block of memory we can use 'if' word to check a condition, and if that condition
 * it true, program starts executing that block of code.
 */

void Conditions()
{
	{
		// this block will always execute
		std::cout << "inside of first block" << std::endl;
	}

	if (false)
	{
		// this block will only execute if the condition is true
		std::cout << "inside of second block" << std::endl;
	}
}
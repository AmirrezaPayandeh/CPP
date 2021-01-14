// Ternary Operators

#include <iostream>

void TernaryOperatorsPrint()
{
	int Speed = 0;
	int Level = 5; // change this value to more than 5 and see reslut

	if (Level > 5)
		Speed = 10;
	else
		Speed = 5;

	// you can write the exact same if statement as follow
	Speed = Level > 5 ? 10 : 5;
	std::cout << "Speed = " << Speed << std::endl;
}
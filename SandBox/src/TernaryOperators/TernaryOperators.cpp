// Ternary Operators

#include <iostream>

void TernaryOperatorsPrint()
{
	int Speed = 0;
	int Level = 5; // change this value to more than 5 and see reslut

	if (Level > 5)
		Speed = 10;
	else
		Speed = 50;

	// you can write the exact same if statement as follow
	Speed = Level > 5 ? 10 : 5;
	std::cout << "Speed = " << Speed << std::endl;

	// but remember to make it as simple as you can.
	Speed = (Level > 10 && Level < 100) ? Level < 10 ?  : 10;
	std::cout << "Speed = " << Speed << std::endl;
}
// Visibility

#include <iostream>

/*
 * there are 3 different type of visibility in c++. private, protected and public. these do not affect performance.
 * if a property is marked as private, that property is only accessible from inside of class or a friend.
 * if a property is marked as protected, that property is only accessible from inside of class or subclasses.
 * if a property is marked as public, anyone from anywhere can access the property.
 */

class VisibilityClassA
{
public:
	int publicVar = 100;
protected:
	int protectedVar = 50;
private:
	int privateVar = 1;
};

class VisibilityClassB : public VisibilityClassA
{
public:
	void Print()
	{
		std::cout << "publicVar = " << publicVar << std::endl;
		std::cout << "protectedVar = " << protectedVar << std::endl;

		// can not access a private variable from other calsses
		// std::cout << "privateVar = " << privateVar << std::endl;
	}
};
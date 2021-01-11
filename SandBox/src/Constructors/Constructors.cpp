// Constructors

#include <iostream>

/*
 * a constructor gets executed when an instance of a class is made.
 * a deconstructor gets executed whenever an instance of a class get destroyed.
 */
class MyConstructorClass
{
public:
	MyConstructorClass()
	{
		std::cout << "Created Instance of MyConstructorClass!" << std::endl;
	}
	~MyConstructorClass()
	{
		std::cout << "Destroyed Instance of MyConstructorClass!" << std::endl;
	}

private:

};
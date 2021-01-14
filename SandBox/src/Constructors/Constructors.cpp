// Constructors

#include <iostream>

/*
 * a constructor gets executed when an instance of a class is made.
 * a deconstructor gets executed whenever an instance of a class get destroyed.
 */
class MyConstructorClass
{
	// IMPORTANT: there is a default constructor for each class, this is why you can instantiate your class
	// even if you don't write your own constructor. to remove your default constructor, you can do this:
	// MyConstructorClass() = delete;
public:
	MyConstructorClass()
	{
		std::cout << "Created Instance of MyConstructorClass!" << std::endl;
	}
	~MyConstructorClass()
	{
		std::cout << "Destroyed Instance of MyConstructorClass!" << std::endl;
	}
};
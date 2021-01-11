// Inheritance

#include <iostream>

/*
 * inheritance is used to reduce code redundancy. when you have 2 calss with same properties that there is only
 * a samall difference such as a variable, we can use inheritance.
 * 
 * there is something called interface which is a class. an interface can have functions that are forced to be
 * implemented in a subcalss. we can do so by making a function to be pure. we can do that by writing word virtual
 * in front of a function.
 */
class ClassA
{
public:
	virtual void Print() = 0;
};

// B is inherited from A, and is forced to implement Print() otherwise we can not instantiate from A
class ClassB : public ClassA
{
public:
	// if we remove this function we won't get any compiler error, but we are not able to instantiate from this calss
	void Print() override
	{
		std::cout << "value = " << value << std::endl;
	}
	void IncreamentValue()
	{
		value++;
	}

private:
	int value = 0;
};
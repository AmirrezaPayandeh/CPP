// Multiple Return Values

#include <iostream>

struct Student
{
	std::string name;
	int age;
};

void MultipleReturn(std::string& name, int& age)
{
	name = "C++";
	age = 42;
}

Student MultipleReturn()
{
	return { "C++", 42 };
}

void MultipleReturnPrint()
{
	// there are several ways of returning multiple value from a function, the first way is to pass
	// arguments by refrence to the function an expect that the function modify those variables.
	std::string name1;
	int age1;
	MultipleReturn(name1, age1);
	std::cout << "name1 = " << name1 << ", age1 = " << age1 << std::endl;

	std::cout << "========================================" << std::endl;

	// another simple way is to make a struct (or even a class) and just return an instance of it.
	Student s = MultipleReturn();
	std::cout << "name2 = " << s.name << ", age2 = " << s.age << std::endl;
}
// Implicit Conversion

#include <iostream>

class Implicit
{
private:
	std::string m_Name;
	int m_Age;
public:
	Implicit(const std::string& name)
		: m_Name(name), m_Age(-1) {}
	explicit Implicit(int age)
		: m_Name("Unknown"), m_Age(age) {}

	void Print()
	{
		std::cout << "name: " << m_Name << ", age: " << m_Age << std::endl;
	}
};

void ImplicitPrint()
{
	// in c++ you can instantiate a class as follow, and by doing so, c++ will automaticlly convert that
	// datatype to other datatype. this is called implicit conversion.
	Implicit i1 = std::string("C++");

	// to disable this functionality you can write 'explicit' in front of your function decleration.
	//Implicit i2 = 42; // you can not write code like this, if you define constructor to be explicit.
	Implicit i2(42); // remove 'explicit' from the constructor and run code above instead of this line.

	i1.Print();
	i2.Print();
}
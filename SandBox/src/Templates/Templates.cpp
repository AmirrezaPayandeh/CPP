// Templates

#include <iostream>

/*
 * templates are useful if we have a function that does the same thing but have multiple input types.
 * you can make only one template version of function instead of overloading that multiple times.
 */

template<typename T>
void PrintTemp(T var)
{
	std::cout << var << std::endl;
}

template<typename T, int var>
struct TempStruct
{
	T type = 9;
	int age = var;

	void Print()
	{
		std::cout << type << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, TempStruct<int, 42> s)
{
	stream << "type = " << s.type << ", age = " << s.age;
	return stream;
}

void TemplatePrint()
{
	PrintTemp(4);
	PrintTemp("C++");
	PrintTemp(9.23f);
	PrintTemp(TempStruct<int, 42>());
}
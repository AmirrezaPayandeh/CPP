// Operators
// see https://en.cppreference.com/w/cpp/language/operators for list of all operators in c++

#include <iostream>

struct Vector2D
{
	float x, y;
	Vector2D(float x, float y)
		: x(x), y(y) {}
	
	// in c++ you can overload operators
	Vector2D operator+(Vector2D other)
	{
		return Vector2D(x + other.x, y + other.y);
	}

	Vector2D operator*(Vector2D other)
	{
		return Vector2D(x * other.x, y * other.y);
	}

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

void OperatorPrint()
{
	Vector2D v1(1.5f, 2.5f);
	Vector2D v2(2.5f, -0.5f);
	Vector2D v3(1.1f, 1.1f);

	Vector2D reslut = v2 + v1 * v3;
	//Vector2D reslut = (v2 + v1) * v3;

	reslut.Print();
}
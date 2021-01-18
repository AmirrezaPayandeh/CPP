// Vectors

/*
 * vectors are just dynamic arrays.
 * if we want to have a dynamic array we can use vector class. vector is in STL and you can make
 * arrays of any type you want.
 */

#include <iostream>
#include <vector>

struct Vec3
{
	int x, y, z;

	Vec3(int x, int y, int z)
		: x(x), y(y), z(z) {}

	// Copy Constructor
	Vec3(const Vec3& vec)
		: x(vec.x), y(vec.y), z(vec.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, const Vec3& vec)
{
	stream << vec.x << ", " << vec.y << ", " << vec.z;
	return stream;
}

void VectorPrint()
{
	std::vector<Vec3> vec1;
	vec1.push_back(Vec3(1, 2, 3));
	vec1.push_back(Vec3(4, 5, 6));
	vec1.push_back(Vec3(7, 8, 9));


	for (int i = 0; i < vec1.size(); i++)
		std::cout << vec1[i] << std::endl;

	vec1.erase(vec1.begin() + 1); // for removing an element from vector. this function uses iterator
	std::cout << "erased second element:" << std::endl;

	for (int i = 0; i < vec1.size(); i++)
		std::cout << vec1[i] << std::endl;

	std::cout << "========================================" << std::endl;

	// as we can see in the output, we get 6 'Copied!' message. why c++ is copying my vector 6 times?
	// when we define a vector and we don't specify a size for it and want to add an element to it, c++
	// will allocate a new space in memory for new size, and then it copies all previous elements into
	// new block of memory. this is why 3 of the copies happen. so if we know our program, we can just
	// tell vector to allocate 3 block of memory for our vector, so it won't have to allocate new block
	// of memory, when we add a new element to it.
	// the 3 other copies happen when we create new element and pass them into our vector with push_bacl()
	// so now that we know why these copies happen, we can do this:
	std::vector<Vec3> vec2;
	vec2.reserve(3);
	vec2.emplace_back(1, 2, 3);
	vec2.emplace_back(4, 5, 6);
	vec2.emplace_back(7, 8, 9);
	// now we have no copies!
}
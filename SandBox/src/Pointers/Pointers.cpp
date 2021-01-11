// Pointers

#include <iostream>

/*
 * Pointers are just integers that represent an address of memory. so if we have an address, it means
 * we can do anything to it (it can be dealt with in any way).
 * 
 * '&' simply returns address of a given variable (even if the given variable is a pointer itself).
 * 
 * IMPORTANT: if you allocate memory for a pointer, you have to delete it manually (or you can use smart pointers)
 */
void Pointers()
{
	float var = 0.0f;
	int* myPtr = (int*)(&var);
	std::cout << "float var = " << var << " -> address: " << &var << std::endl;
	std::cout << "int* myPtr = " << *myPtr << " -> address: " << myPtr << std::endl;
}
// New

#include <iostream>

class NewEntity
{
private:
	int m_X;
public:
	NewEntity(int var) :m_X(var) { std::cout << "Created NewEntity!\n"; }
	~NewEntity() { std::cout << "Destroyed NewEntity!\n"; }

	void PrintX() const { std::cout << "X = " << m_X << std::endl; }
};

void NewPrint()
{
	// 'new' will allocate memory on heap when we create a new instance of a class. it will also automatically
	// call constructor for us.
	NewEntity* ne1 = new NewEntity(6);
	// always remember to delete your object.
	delete ne1;
	std::cout << "========================================" << std::endl;

	// if you already have a memory and just want to give it to your instance and call constructor for your 
	// istance you can do this
	int* size = new int;
	std::cout << size << std::endl;
	NewEntity* ne2 = new(size) NewEntity(5);
	std::cout << ne2 << std::endl;
	ne2->PrintX();
	delete ne2;
}
// Member Initializer List

#include <iostream>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}
	Entity(int var)
	{
		std::cout << "Created Entity with " << var << "!" << std::endl;
	}
};


class MemberInitializerList
{
private:
	int m_X;
	Entity e;
public:
	// it's better to initialize your member variables this way, because by doing so, you only construct
	// member variables once.
	MemberInitializerList()
		: m_X(0), e(Entity(0)) // or just e(0)
	{
	}
	
	// if you use this constructor instead, you wil initialize e twice.
	/*MemberInitializerList()
	{
		m_X = 0;
		e = Entity(1);
	}*/
	
};
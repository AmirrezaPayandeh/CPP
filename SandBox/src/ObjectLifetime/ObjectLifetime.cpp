// ObjectLifetime

#include <iostream>

class ObjectLifetimeEntity
{
private:
	const char* m_Name = "";
public:
	ObjectLifetimeEntity(const char* name)
		: m_Name(name)
	{
		std::cout << "Created ObjectLifetimeEntity " << m_Name << std::endl;
	}

	~ObjectLifetimeEntity()
	{
		std::cout << "Destroyed ObjectLifetimeEntity " << m_Name << std::endl;
	}
};

void ObjectLifetimePrint()
{
	// this object is created on stack. so as soon as we get out of this scope, it gets destroyed.
	ObjectLifetimeEntity OLE1("OLE1");

	// this object is created on heap. se even if we get out of this scope, it does not get destroyed.
	ObjectLifetimeEntity* OLE2 = new ObjectLifetimeEntity("OLE2");
		
	// to destroy OLE2 (free the memory and call desructor), we need to call delete for it.
	delete OLE2; // if you comment this line, you won't see a destry message on console when you run program.
}
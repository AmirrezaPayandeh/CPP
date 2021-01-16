// Smart Pointers

// to use smart pointers you can use 'memory' library
#include <memory>
#include <iostream>

class SmartEntity
{
public:
	SmartEntity()
	{
		std::cout << "Created SmartEntity!" << std::endl;
	}
	~SmartEntity()
	{
		std::cout << "Destroyed SmartEntity!" << std::endl;
	}
};

void SmartPointerPrint()
{
	// Smart Pointers are a way to prevent dangling references. as soon as we exit the scope, it will get destroyed

	{
		// uniq_ptr
		std::unique_ptr<SmartEntity> e = std::make_unique<SmartEntity>();
		// we can not copy a uniqe pointer, because the copy operator is deleted
		//std::unique_ptr<SmartEntity> e2 = e1;
	}
	std::cout << "Exited Uniqe_Ptr Scope" << std::endl;

	std::cout << "========================================" << std::endl;

	{
		// shared_ptr
		std::shared_ptr<SmartEntity> e1;
		{
			// by shared pointer we can have multiple refrences to a block of memory. that block gets freed
			// only when all the refrences get deleted.
			std::shared_ptr<SmartEntity> e2 = std::make_shared<SmartEntity>();
			e1 = e2;
		}
		std::cout << "Exited Shared_Ptr Scope-2" << std::endl;
	}
	std::cout << "Exited Shared_Ptr Scope-1" << std::endl;

	std::cout << "========================================" << std::endl;

	{
		// weak_ptr
		// weak pointers does not have a refrence count. so if a block of memory gets freed we will still have
		// our refrence to that block of memory.
		std::weak_ptr<SmartEntity> e1;
		{
			std::shared_ptr<SmartEntity> e2 = std::make_shared<SmartEntity>();
			e1 = e2;
		}
		std::cout << "Exited Shared_Ptr Scope" << std::endl;
	}
	std::cout << "Exited Weak_Ptr Scope" << std::endl;
}
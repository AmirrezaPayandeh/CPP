// Instantiation

/*
 * in c++ you can instantiate your class in 2 different ways. one on the Stack memory, and one on Heap.
 */

class InstantiationEntity
{
private:
	int m_Var;
public:
	InstantiationEntity(int var) : m_Var(var) {}
};

void InstantiationPrint()
{
	// to allocate memory on stack, you can instantiate a class as follow
	InstantiationEntity ie1(10);
	// or
	InstantiationEntity ie2 = InstantiationEntity(10);


	// to allocate memory on heap, you can instantiate a class as follow
	InstantiationEntity* ie3 = new InstantiationEntity(10);
	// by doing so, you will allocate a memory manually, and it will not get destroyed when you exit an scope.
	// you have to delete it manually as follow
	delete ie3;
}
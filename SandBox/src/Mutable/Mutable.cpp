// Mutable


class MutableEntity
{
private:
	int m_Var;
	mutable int m_DebugCount = 0;
public:
	MutableEntity(int var)
	{
		m_Var = var;
	}
	const int& GetVar() const
	{
		// because we marked this function as const, we can not modify a member variable inside this function
		// but let's say we need to debug our function and see how many times this function is called. to do
		// this we can make a variable for counting and mark it as mutable
		m_DebugCount++;
		return m_Var;
	}
};

void MutablePrint()
{
	// when we mark an instance of a class to be const, we are only allowed to call functions that are const
	const MutableEntity e(1);
	e.GetVar();
}
// This

class ThisEntity
{
private:
	int x, y;
public:
	ThisEntity(int x, int y)
	{
		// because input parametrs name is the same as the member variables of this class, we need a way
		// to specify which one we are refering to. to do that, we can use 'this' keyword.
		// IMPORTANT: the 'this' keyword is a POINTER to the current class (instance).
		this->x = x;
		this->y = y;
		// or we could write it as follow
		(*this).x = x;

		// another way to do it is as follow
		ThisEntity* te1 = this;
		te1->x = x;

		// if we needed a refrence, we can do this
		ThisEntity& te2 = *this;
	}

	int GetX() const
	{
		// IMPORTANT: this in const functions is not just an pointer. it is also a const reference.
		const ThisEntity* te1 = this;

		// and if we wanted a refrence, we can do this
		const ThisEntity& te2 = *this;

		return x;
	}
};
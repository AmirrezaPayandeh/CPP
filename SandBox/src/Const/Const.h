// Const, read Const.cpp file first

#pragma once

class ConstEntity
{
private:
	int m_X;
	int var;
public:
	// another use of const is after a function decleration. it means that you are not allowed to change
	// any member variable of the class that the function is in.
	int GetX() const
	{
		//var = 2; // stil it's possible to allow it to changed, by putting word 'mutable' in front of it's decleration
		return m_X;
	}
};

void ConstPrint();
void PrintConstEntity(const ConstEntity& e);
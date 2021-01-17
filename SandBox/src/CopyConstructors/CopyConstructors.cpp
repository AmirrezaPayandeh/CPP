// Copy Constructors

#include <iostream>

class String
{
private:
	size_t m_Size;
	char* m_Buffer;
public:
	String(const char* string)
		: m_Size(strlen(string)), m_Buffer(new char[m_Size + 1])
	{
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	String(const String& other)
		: m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	~String()
	{
		delete[] m_Buffer;
	}

	char* GetBuffer() const
	{
		return m_Buffer;
	}

	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.GetBuffer();
	return stream;
}

void CopyConstructorPrint()
{
	String first = "C++";
	String second = first;

	first[0] = 'G';

	std::cout << first << std::endl;
	std::cout << second << std::endl;
}
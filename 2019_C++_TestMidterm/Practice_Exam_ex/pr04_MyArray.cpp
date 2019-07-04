#include "pr04_MyArray.h"


MyArray::MyArray(void)
{
	m_size = 10;
	m_pData = new int[10];

	for(int i=0;i<10;i++)
	{
		m_pData[i] = 0;
	}
}

MyArray::MyArray(int size)
{
	m_size = size;
	m_pData = new int[m_size];
	for(int i=0;i<m_size;i++)
	{
		m_pData[i] = 0;
	}
}
MyArray::~MyArray(void)
{
	delete [] m_pData;
}

int MyArray::getSize() { return m_size; }
int MyArray::getData(int index) { return m_pData[index]; }
void MyArray::setData(int index,int value)
{
	m_pData[index] = value;
}
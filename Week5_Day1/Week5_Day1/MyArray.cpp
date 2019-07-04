#include "MyArray.h"
#include<iostream>
using namespace std;
#include<cassert>

MyArray::MyArray(void)
{
	m_size=10;
	m_pData = new int[m_size]; //���� �迭 ������ֱ�

	for(int i=0;i<m_size;i++)
	{
		m_pData[i]=0; // �迭 �� 0���� �ʱ�ȭ
	}
}

MyArray::MyArray(int size)
{
	m_size = size;
	m_pData = new int[m_size];

	for(int i=0;i<m_size;i++)
	{
		m_pData[i]=0;
	}
}

MyArray::~MyArray(void)
{
	delete [] m_pData; // �Ҹ��ڴ� �ݵ�� �Ҹ��Ƿ� ���⼭ delete������!!!
}

//getter/setter
int MyArray::getSize() // �迭 ������ �˰������
{
	return m_size;
}
int MyArray::getData(int index) // Ư�� index��ġ�� ���� �˰������
{
	if(index<0 || index>m_size-1) // ����ó�� : �迭[index]���� �˰������ index
								  // �̷��� �ȵ�!!!
	{
		cout << "Array index out of range(MyArray) : " << index << endl;
		exit(-1);
	}
	return m_pData[index];
}

void MyArray::setData(int index, int value)
{
	assert(index>=0 && index<m_size); // �ݵ�� �̷�����!!! -> ���Ǿȿ��� ������ �ȵǸ� �״´�
								      // assert(���ǽ�) -> ���ǽ� ���� ���ϸ� �׾�
	/* assert�� �ؿ��� ���� �ǹ��̴�....!
	if(index<0 || index>m_size-1) 
	{
		cout << "Array index out of range(MyArray) : " << index << endl;
		exit(-1);
	} */

	m_pData[index]=value;
}
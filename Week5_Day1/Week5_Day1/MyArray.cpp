#include "MyArray.h"
#include<iostream>
using namespace std;
#include<cassert>

MyArray::MyArray(void)
{
	m_size=10;
	m_pData = new int[m_size]; //동적 배열 만들어주기

	for(int i=0;i<m_size;i++)
	{
		m_pData[i]=0; // 배열 값 0으로 초기화
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
	delete [] m_pData; // 소멸자는 반드시 불리므로 여기서 delete해주자!!!
}

//getter/setter
int MyArray::getSize() // 배열 사이즈 알고싶을때
{
	return m_size;
}
int MyArray::getData(int index) // 특정 index위치의 값을 알고싶을때
{
	if(index<0 || index>m_size-1) // 예외처리 : 배열[index]값을 알고싶은데 index
								  // 이러면 안돼!!!
	{
		cout << "Array index out of range(MyArray) : " << index << endl;
		exit(-1);
	}
	return m_pData[index];
}

void MyArray::setData(int index, int value)
{
	assert(index>=0 && index<m_size); // 반드시 이래야해!!! -> 조건안에가 성립이 안되면 죽는다
								      // assert(조건식) -> 조건식 성립 안하면 죽어
	/* assert는 밑에와 같은 의미이다....!
	if(index<0 || index>m_size-1) 
	{
		cout << "Array index out of range(MyArray) : " << index << endl;
		exit(-1);
	} */

	m_pData[index]=value;
}
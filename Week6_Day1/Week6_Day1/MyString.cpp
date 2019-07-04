#include "MyString.h"


MyString::MyString(void)
{
	m_length = 0;
	m_pStr = nullptr; // 포인터는 아무것도 안가리키는 상태

}
MyString::MyString(const char * in)
{
	m_length = 0; // 문자열 길이 구하는 함수 쓰지 않고 이렇게 while로 구해보자.
	while(true)
	{
		if(in[m_length] == '/0') break; 
		m_length++;
	}

	m_pStr = new char[m_length+1]; //+1을 해주는 이유 : 널문자도 넣어주어야 하므로 
	for(int i=0 ; i<m_length ; i++) 
		m_pStr[i] = in[i]; // 문자열 복사
	m_pStr[m_length] = '/0'; // 마지막에는 널문자를 넣어주고 마무리
}
MyString::MyString(const MyString & in)
{
	m_length = in.m_length; 
	m_pStr = new char[m_length+1];
	for(int i=0;i<m_length;i++)
		m_pStr[i] = in.m_pStr;
}
MyString::~MyString(void)
{
	delete [] m_pStr;
}


void MyString::add(const MyString & in) // 난이도 상
{
	char * old = m_pStr; // 원래꺼 담을 포인터 변수 선언
	int oldLength = m_length;

	m_length += in.m_length; // 길이는 새로운거를 합하고
	m_pStr = new char[m_length+1]; // 길이가 늘어난 포인터 변수 새로 선언

	for(int i=0 ; i<oldLength ; i++)
	{
		m_pStr[i] = old[i]; // 이전 문자열 복사
	}
	for(int i=oldLength ; i<m_length ; i++)
	{
		m_pStr[i] = in.m_pStr[i-oldLength]; // 이후 문자열 복사
	}

	m_pStr[m_length] = '/0'; // 마지막에는 널문자를 넣어주고 마무리


	delete[] old; // old는 필요없어졌으니깐 바로 delete

}
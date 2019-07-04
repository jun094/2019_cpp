#include "pr11_MyString.h"
#include<iostream>
using namespace std;

MyString::MyString(void)
{
	m_pstr=nullptr;
	m_length=0;
}
MyString::MyString(const char *in)
{
	m_length=0;
	while(true)
	{
		if(in[m_length]=='\0')
		{
			break;
		}
		m_length++;	
	}
	m_pstr = new char[m_length+1];
	for(int i=0;i<m_length;i++)
	{
		m_pstr[i]=in[i];
	}
	m_pstr[m_length] = '\0';
}
MyString::MyString(const MyString &in)
{
	m_length = in.m_length; // universe 길이
	m_pstr = new char[in.m_length+1]; // 새로운 길이 저장
	for(int i=0;i<in.m_length;i++)
	{
		m_pstr[i]=in.m_pstr[i]; // 여기가 이해가 안됐었음 !!!!!!!!!!!!!!!!!!!!!!!
	}
	m_pstr[in.m_length] = '\0';
}
MyString::~MyString(void)
{
	delete [] m_pstr;
}
void MyString::show()
{
	for(int i=0;i<m_length;i++)
	{
		cout<<m_pstr[i];
	}cout<<endl;
}
void MyString::add(MyString &add)
{
	char *old = new char[m_length];
	int old_length = m_length;

	for(int i=0;i<old_length;i++)
	{
		old[i] = m_pstr[i];
	}

	m_length += add.m_length;
	m_pstr = new char[m_length+1];
	for(int i=0;i<old_length;i++)
	{
		m_pstr[i] = old[i];
	}
	cout<<old_length<<endl;
	cout<<m_length<<endl;
	for(int i=old_length;i<m_length;i++)
	{
		m_pstr[i] = add.m_pstr[i-old_length];
	}
	m_pstr[m_length] = '\0';
}
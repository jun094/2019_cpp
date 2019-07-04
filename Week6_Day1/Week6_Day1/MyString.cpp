#include "MyString.h"


MyString::MyString(void)
{
	m_length = 0;
	m_pStr = nullptr; // �����ʹ� �ƹ��͵� �Ȱ���Ű�� ����

}
MyString::MyString(const char * in)
{
	m_length = 0; // ���ڿ� ���� ���ϴ� �Լ� ���� �ʰ� �̷��� while�� ���غ���.
	while(true)
	{
		if(in[m_length] == '/0') break; 
		m_length++;
	}

	m_pStr = new char[m_length+1]; //+1�� ���ִ� ���� : �ι��ڵ� �־��־�� �ϹǷ� 
	for(int i=0 ; i<m_length ; i++) 
		m_pStr[i] = in[i]; // ���ڿ� ����
	m_pStr[m_length] = '/0'; // ���������� �ι��ڸ� �־��ְ� ������
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


void MyString::add(const MyString & in) // ���̵� ��
{
	char * old = m_pStr; // ������ ���� ������ ���� ����
	int oldLength = m_length;

	m_length += in.m_length; // ���̴� ���ο�Ÿ� ���ϰ�
	m_pStr = new char[m_length+1]; // ���̰� �þ ������ ���� ���� ����

	for(int i=0 ; i<oldLength ; i++)
	{
		m_pStr[i] = old[i]; // ���� ���ڿ� ����
	}
	for(int i=oldLength ; i<m_length ; i++)
	{
		m_pStr[i] = in.m_pStr[i-oldLength]; // ���� ���ڿ� ����
	}

	m_pStr[m_length] = '/0'; // ���������� �ι��ڸ� �־��ְ� ������


	delete[] old; // old�� �ʿ���������ϱ� �ٷ� delete

}
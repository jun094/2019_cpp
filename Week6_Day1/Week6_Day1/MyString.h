#pragma once
class MyString
{
	char * m_pStr;
	int m_length;

public:
	MyString(void);
	MyString(const char * in); //��� char �迭�� �޴´�. -> ����� �������ν� "���� �̰��� �ٲ��� ��������" ��� �ǹ̰� �ȴ�. 
	MyString(const MyString & in);

	~MyString(void);

	void add(const MyString & in); // ���ڿ��� ���ϴ� �Լ�

	char * getStr() { return m_pStr; } // ���ڿ��� main���� ����ϱ� ����
	int getLength() { return m_length;}
};


#include<iostream>

using namespace std;

//#include "Sample.h"

class Sample
{
private :
	int *m_p;
	int m_size;

public:
	Sample(void);
	Sample(int n);
	~Sample(void);

	void read();
	void write();
	int big();

};

Sample::Sample(void)
{
	m_p = new int[10]; // ������ �Է����� ���� ��� �ӽ÷� 10���� �迭 �����Ҵ�.

	for(int i=0;i<10;i++)
	{
		m_p[i] = 0;
	}
}

Sample::Sample(int size)
{
	m_size = size;
	m_p = new int[m_size]; // n�� ���� �迭�� ��������
}

Sample::~Sample(void)
{
	delete [] m_p; // �Ҹ��ڿ��� delete�� ���ش�. 
}

void Sample::read() // ���� �Ҵ���� ���� �迭 p�� ����ڷκ��� ������ �Է� ����
{
	for(int i=0;i<m_size;i++)
	{
		cin>>m_p[i];
	}	
}

void Sample::write() // ���� �迭�� ȭ�鿡 ���
{
	for(int i=0;i<m_size;i++)
	{
		cout<<m_p[i]<<" ";
	}
	cout<<endl;
}

int Sample::big() // ���� �迭���� ���� ū �� ����
{
	int num=m_p[0];

	for(int i=0;i<m_size;i++)
	{
		num = (num>m_p[i]) ? num : m_p[i];
	}

	return num;
}


int main()
{
	Sample s(10); 

	s.read();
	s.write();
	cout<<"���� ū ���� " << s.big() << endl;
	return 0;
}
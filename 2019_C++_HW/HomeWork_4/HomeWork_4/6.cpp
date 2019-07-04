#include<iostream>

using namespace std;

class MyIntStack{
private:
	int *m_p; // ���� �޸𸮷� ����� ������
	int m_size; // ������ �ִ� ũ��
	int m_tos; // ������ ž�� ����Ű�� �ε���

public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(MyIntStack& s); // ���� ������
	~MyIntStack();

	bool push(int n); // ���� n�� ���ÿ� Ǫ���Ѵ�.
					  // ������ ���������� false��, �ƴϸ� true�� ����
	bool pop(int &n); // ������ ž�� �ִ� ���� n�� ���Ѵ�.
					  // ���� ������ ��������� false�� , �ƴϸ� true�� ����
};

MyIntStack::MyIntStack()
{
	m_p = NULL;
	m_size = 0;
	m_tos = 0;
}
MyIntStack::MyIntStack(int size)
{
	m_size = size;
	m_p = new int[m_size];
	m_tos=-1;  
}
MyIntStack::~MyIntStack()
{
	delete [] m_p;
	//cout<<"m_p ������ :"<< (void*)m_p <<endl;
}
MyIntStack::MyIntStack(MyIntStack& s)
{
	m_size = s.m_size;
	m_p = new int[s.m_size];
	m_tos=s.m_tos;
	
}
bool MyIntStack::push(int n)
{
	if(m_tos+1>=m_size) 
	{
		cout<<" stack is full ! "<<endl;
		return false;
	}
	else 
	{
		m_tos++; // ���� tos���� ++�� ���ְ�
		*(m_p+m_tos) = n; // �� ���� push
		return true;
	}
}
bool MyIntStack::pop(int &n)
{
	if(m_tos<0) 
	{
		cout<<" stack is empty ! " <<endl;
		return false;
	}
	else
	{
		n = *(m_p+m_tos); // ���� ���� ��������/��
		*(m_p+m_tos) = NULL; // ���� ����Ű�� ���� ���� ���������� null������ �ʱ�ȭ
		m_tos--; // �������� tos�� --
		return true;
	}
}


int main()
{
	MyIntStack a(3);
	a.push(10);
	a.push(20);

	MyIntStack b(a);
	b.push(30);

	int n;
	a.pop(n);
	cout<<"���� a���� ���� �� "<<n<<endl;
	b.pop(n);
	cout<<"���� b���� ���� �� "<<n<<endl;

	return 0;
}
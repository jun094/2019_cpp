#include<iostream>
#include<string>

using namespace std;

// �����ε� ( �Լ��ߺ� )
class Base{
public:
	 void f()
	{
		cout<<"Base::�����Լ�"<<endl;
	}
};

class Derived : public Base{
public:
	 void f()
	{
		cout<<"Derived::�ߺ��Լ�"<<endl;
	}
};

// �������̵�
class Base2{
public:
	virtual void f2() // ����(virtual) �Լ� : ������ ������ ���簨 ���
	{
		cout<<"Base::�����Լ�"<<endl;
	}
};

class Derived2 : public Base2{
public:
	virtual void f2() // �������̵� 
	{
		cout<<"Derived::�ߺ��Լ�"<<endl;
	}
};

int main()
{
	// �����ε�(�Լ��ߺ�)
	Derived a, *pDer;
	pDer = &a;
	pDer->f();
	
	Base *pBase;
	pBase = &a;
	pBase->f();

	cout<<endl<<endl;

	// ��������2��
	Derived2 b, *pDer2;
	pDer2 = &b;
	pDer2->f2();
	
	Base2 *pBase2;
	pBase2 = &b;
	pBase2->f2();
	return 0;
}
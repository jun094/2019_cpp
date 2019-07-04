#include<iostream>
#include<string>

using namespace std;

// 오버로딩 ( 함수중복 )
class Base{
public:
	 void f()
	{
		cout<<"Base::원래함수"<<endl;
	}
};

class Derived : public Base{
public:
	 void f()
	{
		cout<<"Derived::중복함수"<<endl;
	}
};

// 오버라이딩
class Base2{
public:
	virtual void f2() // 가상(virtual) 함수 : 같은거 있으면 존재감 상실
	{
		cout<<"Base::원래함수"<<endl;
	}
};

class Derived2 : public Base2{
public:
	virtual void f2() // 오버라이딩 
	{
		cout<<"Derived::중복함수"<<endl;
	}
};

int main()
{
	// 오버로딩(함수중복)
	Derived a, *pDer;
	pDer = &a;
	pDer->f();
	
	Base *pBase;
	pBase = &a;
	pBase->f();

	cout<<endl<<endl;

	// 오버라이2딩
	Derived2 b, *pDer2;
	pDer2 = &b;
	pDer2->f2();
	
	Base2 *pBase2;
	pBase2 = &b;
	pBase2->f2();
	return 0;
}
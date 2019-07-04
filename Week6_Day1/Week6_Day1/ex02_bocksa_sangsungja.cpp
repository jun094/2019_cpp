#include<iostream>

using namespace std;

class A
{
public:
	int m_i;
	A() 
	{ 
		cout<<"기본생성자"<<endl; 
		m_i = 20; 
	}
	A(int i) 
	{ 
		cout<<"인자가 있는 생성자"<<endl; 
		m_i = i; 
	}

	// copy constructoor
	// A형식의 레퍼런스를 만든다. -> copy constructor는 안 만들면 자동으로 만들어져있다. 
	// 목적 : copy를 목적으로 하는 클래스를 만들때 이것이 불려진다. 
	A(const A & in) 
	{ 
		cout<<"레퍼런스(copy contructor) 생성자"<<endl; 
		m_i = in.m_i; 
		//in.m_i=0;
	} 

	~A() { cout<<"bye~"<<endl;}
};


void func(A in) 
{
	// A in은 로컬 변수로 func과 함께 생겨남과 동시에 main문에 b가 바로 복사되어 A in =b의 의미이다.. 
}


int main()
{
	A a(10); // 인자가 있는 생성자로 감
	
	
	A b; // 인자가 없는 생성자로 감							//constructor
	b = a; // 이렇게 하면 어떻게 할까???						//assignment
	cout<<b.m_i<<endl;
	
	
	/* 
	A b = a; // 이렇게 하면 어떻게 될까??	--> 이게 더 빠르다	//copy consturctor 
	//A b(a); //이것도 같은 의미임 --> 이것도 copy constructor로 간다.  
	
	b.m_i = 30;										
	cout<<a.m_i<<endl;
	
	// 쉽게 생각하면..
	int i = 0;
	i = i+1; // 이건 i+1을 한뒤에 다시 i에 복사 시킴 
	++i; // 이건 i 그 자체 값을 +1 시킴 -> 복사가 아님 -> 더 빠름
	*/
	
	//////////////////////////////////////////////////////////////////////////////////////
	/*A b = a;
	func(b);*/



	return 0;
}
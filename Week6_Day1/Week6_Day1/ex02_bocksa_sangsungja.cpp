#include<iostream>

using namespace std;

class A
{
public:
	int m_i;
	A() 
	{ 
		cout<<"�⺻������"<<endl; 
		m_i = 20; 
	}
	A(int i) 
	{ 
		cout<<"���ڰ� �ִ� ������"<<endl; 
		m_i = i; 
	}

	// copy constructoor
	// A������ ���۷����� �����. -> copy constructor�� �� ����� �ڵ����� ��������ִ�. 
	// ���� : copy�� �������� �ϴ� Ŭ������ ���鶧 �̰��� �ҷ�����. 
	A(const A & in) 
	{ 
		cout<<"���۷���(copy contructor) ������"<<endl; 
		m_i = in.m_i; 
		//in.m_i=0;
	} 

	~A() { cout<<"bye~"<<endl;}
};


void func(A in) 
{
	// A in�� ���� ������ func�� �Բ� ���ܳ��� ���ÿ� main���� b�� �ٷ� ����Ǿ� A in =b�� �ǹ��̴�.. 
}


int main()
{
	A a(10); // ���ڰ� �ִ� �����ڷ� ��
	
	
	A b; // ���ڰ� ���� �����ڷ� ��							//constructor
	b = a; // �̷��� �ϸ� ��� �ұ�???						//assignment
	cout<<b.m_i<<endl;
	
	
	/* 
	A b = a; // �̷��� �ϸ� ��� �ɱ�??	--> �̰� �� ������	//copy consturctor 
	//A b(a); //�̰͵� ���� �ǹ��� --> �̰͵� copy constructor�� ����.  
	
	b.m_i = 30;										
	cout<<a.m_i<<endl;
	
	// ���� �����ϸ�..
	int i = 0;
	i = i+1; // �̰� i+1�� �ѵڿ� �ٽ� i�� ���� ��Ŵ 
	++i; // �̰� i �� ��ü ���� +1 ��Ŵ -> ���簡 �ƴ� -> �� ����
	*/
	
	//////////////////////////////////////////////////////////////////////////////////////
	/*A b = a;
	func(b);*/



	return 0;
}
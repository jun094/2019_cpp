#include<iostream>

using namespace std;

class MyIntStack{
private:
	int *m_p; // 스텍 메모리로 사용할 포인터
	int m_size; // 스텍의 최대 크기
	int m_tos; // 스텍의 탑을 가리키는 인덱스

public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(MyIntStack& s); // 복사 생성자
	~MyIntStack();

	bool push(int n); // 정수 n을 스택에 푸시한다.
					  // 스택이 꽉차있으면 false를, 아니면 true를 리턴
	bool pop(int &n); // 스택의 탑에 있는 값을 n에 팝한다.
					  // 만일 스택이 비어있으면 false를 , 아니면 true를 리턴
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
	//cout<<"m_p 해제됨 :"<< (void*)m_p <<endl;
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
		m_tos++; // 먼저 tos값을 ++를 해주고
		*(m_p+m_tos) = n; // 그 곳에 push
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
		n = *(m_p+m_tos); // 먼저 값을 대입해주/고
		*(m_p+m_tos) = NULL; // 이제 가리키는 곳에 값이 없어졌으니 null값으로 초기화
		m_tos--; // 마지막에 tos값 --
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
	cout<<"스택 a에서 팝한 값 "<<n<<endl;
	b.pop(n);
	cout<<"스택 b에서 팝한 값 "<<n<<endl;

	return 0;
}
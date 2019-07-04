#include<iostream>

using namespace std;

//int count =0; // count라는 변수명은 많이쓰임 -> 다른 클래스를 합칠 때 쫑 날 우려가 높음 -> static

class Circle
{
private:
	static int count; // static(전역) , class안에 있는 전역변수 -> 그러면 count=0 초기화는 언제?? 밑에 !!

public:
	
	int m_r;
	int m_index;

	Circle(int r = 10)
	{
		count++;
		m_index=count;

		m_r=r;
	}

	void draw()
	{
		cout<<"Circle "<<m_index<<" : "<<m_r<<endl;
	}
	static int getCount() // static 변수를 반환하는 getter임
	{
		return count; //static 변수를 private으로 했지만 main에서 접근하고 싶을때.
	}
};
int Circle::count =0 ; // static에 대한 초기화 


void func()
{
	static int count= 0 ; // 함수속에서도 static이 가능하다. 

	cout<<"func : " << count<<endl; // 10부터 시작하지 않음 -> 0부터 제대로 작동됨
	count++;
}


int main()
{
	Circle a(1);
	Circle b;

	a.draw();
	b.draw();

	
	//Circle::count = 10; // 이렇게 main에서도 static 변수 사용이 가능하다. -> 만약, static변수를 private으로 하면 접근 불가능.
	cout<<Circle::getCount()<<endl;


	for(int i=0;i<10; i++)
	{
		func();
	}

	return 0;
}
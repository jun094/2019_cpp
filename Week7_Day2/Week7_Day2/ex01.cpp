#include<iostream>
#include<string>

using namespace std;

// 상속 : 기능 추가와 교체(print함수)가 가능함

class MyPoint // 점을 기억하는 클래스
{
public :
	float m_x, m_y;
	MyPoint()
	{
		m_x=0; m_y=0;
	}
	MyPoint(float x, float y)
	{
		m_x=x; m_y=y;
	}
	void print()
	{
		cout<<"("<<m_x<<","<<m_y<<")"<<endl;
	}
};

class MyColorPoint : public MyPoint // 점을 기억하는데 색까지 저장하는 클래스 --> MyPoint 에 속해 있을것!!
									// " : public 부모클래스명 "
{
public:
	string m_color;
	MyColorPoint() 
	{
		//m_x=0;
		//m_y=0; // x,y와는 부모 클래스에서 건드는건데 왜 여기서 건드려?? -> 지워 !!
			     // 각각의 클래스의 멤버변수는 각각의 클래스에서만 책임진다 !!
		         // default생성자가 호출되면 미리 만들어져있던 부모클래스의 default생성자가 불려진다. 

		m_color="black";
	}
	MyColorPoint(string color) 
		//여기 아무것도 안쓰면 부모클래스에 default가 자동적으로 불림. ":MyPoint( )"가 생략되어있는거임
	{
		//m_x=0;
		//m_y=0;
		m_color=color;
	}
	MyColorPoint(float x, float y, string color) 
		:MyPoint(x,y) // 만약에 default가 아닌 선택적으로 받고 싶을떄는 이렇게 써준다. 
	{
		//m_x=x;
		//m_y=y;
		m_color=color;
	}
	MyColorPoint(MyPoint in, string color)  
		:MyPoint(in) //부모 클래스에서 자동으로 생긴 copy생성자를 불러옴.
	{
		//m_x=x;
		//m_y=y;
		m_color=color;
	}

	//void colorPrint()
	//{
	//	cout<<"["<<m_color<<"] ("<<m_x<<","<<m_y<<")"<<endl;
	//}
	void print() // colorPrint라고 하지 않고 부모 클래스의 함수인 print와 동일하게 써준다면??? --> 자식꺼로(최신꺼로) '교체'가 일어남 !!!!
				 // function override
	{
		//cout<<"["<<m_color<<"] ("<<m_x<<","<<m_y<<")"<<endl; // 여기서 x와 y는 부모의 print기능에 있는것이다. 
		cout<<"["<<m_color<<"]"; MyPoint::print();			   // 이렇게 바꿔쓸 수 있다 !!
	}
};
int main()
{
	MyColorPoint p;
	p.print();
	//p.colorPrint();

	MyColorPoint q(1,2,"yellow");
	//q.colorPrint();
	q.print();
	
	MyColorPoint r(MyPoint(3,4),"Red");
	//r.colorPrint();
	r.print();


	// 부모클래스의 print도 사용이 여전히 가능하다!
	MyPoint x;
	x.print();


	return 0;
}
#include<iostream>
#include<string>

using namespace std;

class MyShape
{
public:
	float x,y;
	string color;

	MyShape()
	{
		x=0;y=0;color="black";
	}
	MyShape(float _x, float _y, string _c)
	{
		x=_x;y=_y;color="black";
	}

	virtual void draw() 
	{ 
		// virtual : 가상함수
		// 애는 어차피 안쓸꺼고 교체가 일어날꺼니깐 지워놔도 좋다 !!
		// 이게 중요 ! 그릴게 없지만 만들어준다 !!
	}

	//virtual void draw() = 0; // 이건 비워놓는게 아니라 없는거다!
							   // 추상적임 -> 추상함(abstract function)
							   // 추상함수(draw)는 반드시 각 클래스에서 만들어줘야한드는 의도를 담을 수 있다.!!!!!!!
							   // 결국 draw는 매우 중요해, 이건 반드시 만들어줘야해 라는 의미임.
							   // 추상함수가 존재하는 클래스(MyShape) 는 추상클래스임 
	//virtual void mousePicking() = 0;
};

class MyLine : public MyShape 
{
	// 이렇게 draw가 없는 함수에서는 virtual void draw() = 0; 라고 하면 오류가 나는 클래스가 된다. 
};
class MyRect : public MyShape 
{
public:
	float w,h;
	
	MyRect() 
		
	{ 
		w=0; h=0; 
	}
	MyRect(float _x, float _y, float _w, float _h, string _c)
		:MyShape(_x,_y,_c)
	{
		w = _w; h = _h; 
	}
	void draw() 
	{ 
		cout<<"rect: ( " << x << "," << y << " ) " << color<< " ["<<w<<","<<h<<"] "<<endl; 
	}
};

class MyCircle : public MyShape
{
public:
	float r;
	MyCircle() { r=0;}
	MyCircle(float _x,float _y,float _r,string _c)
		:MyShape(_x,_y,_c)
	{
		r = _r;
	}

	void draw() 
	{ 
		cout<<"circle: ( " << x << "," << y << " ) " << color<< " <"<<r<<"> "<<endl; 
	}
};

int main()
{
	//// 발전2
	//int num_rect = 2;
	//int num_clc = 3; // 사각형 2개, 원3개 그릴꺼야

	//MyRect rect[10];
	//MyCircle clc[10];

	//for(int i=0;i<num_rect;i++)
	//	rect[i].draw();
	//for(int i=0;i<num_clc;i++)
	//	clc[i].draw(); 
	// 이 코드는 순서를 기억 못함 !! 그래서 이렇게 쓸꺼임 ..! 밑에

	//// 발전2
	//MyRect a;
	//MyCircle b;
	//int num = 2;
	//MyShape *shp[10]; // 포인터의 의미는 원인지, 사각형인지 모르겠지만 10개 그릴수있어..!
	//shp[0] = &a;
	//shp[1] = &b;

	//for(int i=0;i<num;i++)
	//{
	//	shp[i]->draw();
	//} 
	// 이렇게 하면 동적으로도 할 수 있다.


	//// 발전3
	int num = 3;
	MyShape *shp[10]; // 포인터의 의미는 원인지, 사각형인지 모르겠지만 10개 그릴수있어..!
	shp[0] = new MyRect(10,20,30,40,"blue");
	shp[1] = new MyCircle(10,20,100,"red");
	shp[2] = new MyRect(30,40,100,200,"black");

	for(int i=0;i<num;i++)
	{
		shp[i]->draw();  // 동적 바인딩(dynamic binding)
						 // 다형성(polymorphism) : 내용에 맞게끔 모양이 계속 바뀐다.
	} 

	return 0;
}
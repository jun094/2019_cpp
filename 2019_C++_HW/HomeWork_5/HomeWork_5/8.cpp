#include<iostream>
#include<string>

using namespace std;

class Shape{
protected:
	string name; //도형 이름
	int width, height; // 도형이 내접하는 사각형의 너비와 높이
public:
	Shape(string n="",int w=0, int h=0)
	{
		name = n;
		width = w;
		height = h;
	}
	
	virtual double getArea() = 0; // 추상함수
								  // 각 클래스에서 반드시 만들어줘야 한다는 의도를 담을 수 있다. 

	string getName()
	{
		return name;
	}
};

class Oval : public Shape{
public:
	Oval(string n,int w, int h)
		:Shape(n,w,h)
	{}
	
	virtual double getArea()
	{
		return width*height*3.14;
	}

};

class Rect : public Shape{
public:
	Rect(string n,int w, int h)
		:Shape(n,w,h)
	{}
	
	virtual double getArea()
	{
		return width*height;
	}

};
class Triangular : public Shape{
public:
	Triangular(string n,int w, int h)
		:Shape(n,w,h)
	{}
	
	virtual double getArea()
	{
		return width*height/2;
	}

};
int main()
{
	Shape *p[4];
	p[0] = new Oval("빈대떡",10,20);
	p[1] = new Rect("찰떡",30,40);
	p[2] = new Triangular("토스트",30,40);

	for(int i=0;i<3;i++)
	{
		cout<<p[i]->getName()<<" 넓이는 "<<p[i]->getArea() <<endl;
	}
	for(int i=0;i<3;i++)
	{
		delete p[i];
	}
	return 0;
}

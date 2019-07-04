//헤더파일에 있는건 선언부
//여기는 실제 몸체부

#include "MyRect.h"
#include<iostream>

using namespace std;

void func(MyRect in)
{
	in.draw();
}
MyRect::MyRect()
{
	init();
}

MyRect::MyRect(int x, int y)
{
	m_x = x;
	m_y = y;
	//init(); // 위의 생성자 x,y를 호출 -> 똑같이 사용할꺼니깐
	m_h = 10;
	m_w = 10;
}

MyRect::MyRect(int x, int y, int w, int h)
{
	m_x = x;
	m_y = y;
	m_w = w;
	m_h = h;
}
void MyRect::init()
{
	m_x = 0;
	m_y = 0;
	m_w = 0;
	m_h = 0;
}

void MyRect::draw()
{
	cout<<"Rect: (" << m_x << ", " << m_y << ")" ;
	cout<< "(" << m_w << "," << m_h << ")" << endl;
}

// Set Position
void MyRect::setPos(int x, int y)
{
	m_x = x;
	m_y = y;
}

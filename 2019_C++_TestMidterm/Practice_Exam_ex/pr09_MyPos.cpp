#include "pr09_MyPos.h"
#include<iostream>
using namespace std;
MyPos::MyPos(void)
{
	m_x = 0; 
	m_y = 0;
	m_z = 0;
}
MyPos::MyPos(int x,int y,int z)
{
	m_x = x; 
	m_y = y;
	m_z = z;
}
MyPos::~MyPos(void)
{
}
void MyPos::draw()
{
	cout<<m_x<<" , "<<m_y<<" , "<<m_z<<endl;
}

//여기는 함수
MyPos addPos(MyPos a, MyPos b)
{
	MyPos result;
	//result.m_x = a.m_x+b.m_x; // m_x는 mypos의 private변수! 그러나 friend연산자를 통해 접근이 이제는 가능함!!
				    // 밑에처럼 setX함수 만들어줄 필요가 없음!
	result.setX(a.getX()+b.getX()) ;
	result.setY(a.getY()+b.getY()) ;
	result.setZ(a.getZ()+b.getZ()) ;

	return result;
}
MyPos distPos(MyPos a, MyPos b)
{
	MyPos result;
	result.setX(a.getX()-b.getX()) ;
	result.setY(a.getY()-b.getY()) ;
	result.setZ(a.getZ()-b.getZ()) ;

	return result;
}
float dist(MyPos d)
{
	float result;
	result = d.getX()*d.getX() + d.getY()*d.getY() 
				+ d.getZ()*d.getZ();

	return sqrt(result);
}
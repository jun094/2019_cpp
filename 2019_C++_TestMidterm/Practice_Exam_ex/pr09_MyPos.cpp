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

//����� �Լ�
MyPos addPos(MyPos a, MyPos b)
{
	MyPos result;
	//result.m_x = a.m_x+b.m_x; // m_x�� mypos�� private����! �׷��� friend�����ڸ� ���� ������ ������ ������!!
				    // �ؿ�ó�� setX�Լ� ������� �ʿ䰡 ����!
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
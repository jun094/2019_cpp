#include "MyPos.h"
#include<iostream>

using namespace std;

MyPos::MyPos(void)
{
	m_x=0;
	m_y=0;
	m_z=0;
}
MyPos::MyPos(float x,float y,float z)
{
	m_x=x;
	m_y=y;
	m_z=z;
}

MyPos::~MyPos(void)
{
}

void MyPos::draw()
{
	cout<<"Pos : ("<<m_x<<", "<<m_y<<", "<<m_z<<")"<<endl;
}

MyPos addPos(MyPos l, MyPos r) // a~b 거리 구하기 (왼쪽좌표 + 오른쪽 좌표)
{
	MyPos out;
	/* //멤버변수가 private이므로 이렇게는 접근 불가능
	out.m_x = l.m_x+r.m_x;
	out.m_y = l.m_y+r.m_y;
	out.m_z = l.m_z+r.m_z;
	*/

	out.setX(l.getX() + r.getX());
	out.setY(l.getY() + r.getY());
	out.setZ(l.getZ() + r.getZ());

	return out;

}
MyPos subPos(MyPos l, MyPos r) // a~b 거리 구하기 (왼쪽좌표 - 오른쪽 좌표)
{
	MyPos out;
	/* //멤버변수가 private이므로 이렇게는 접근 불가능
	out.m_x = l.m_x-r.m_x;
	out.m_y = l.m_y-r.m_y;
	out.m_z = l.m_z-r.m_z;
	*/

	out.setX(l.getX() - r.getX());
	out.setY(l.getY() - r.getY());
	out.setZ(l.getZ() - r.getZ());

	return out;
}
float getDist(MyPos l, MyPos r) // a~b 거리 차이 구하기
{
	MyPos diff = subPos(l,r);
	float l2 = diff.getX()*diff.getX()
				+diff.getY()*diff.getY()
				+diff.getZ()*diff.getZ();

	return sqrt(l2); // 루트씌어서 return 
}

float MyPos :: length() // 원점과의 거리 구하기 -> getDist(두점의 거리구하기)를 활용해서
{
	//return getDist(MyPos(m_x,m_y,m_z), MyPos(0,0,0));

	this; // 나를 지칭하는 애가 필요 -> MyPos(m_x,m_y,m_z)가 아니라 this포인터를 사용
	return getDist( *this, MyPos(0,0,0)); // 포인터이므로 this는 주소값이 저장되있으므로 *this를 해줘야함
}
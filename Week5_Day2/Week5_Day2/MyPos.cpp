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

MyPos addPos(MyPos l, MyPos r) // a~b �Ÿ� ���ϱ� (������ǥ + ������ ��ǥ)
{
	MyPos out;
	/* //��������� private�̹Ƿ� �̷��Դ� ���� �Ұ���
	out.m_x = l.m_x+r.m_x;
	out.m_y = l.m_y+r.m_y;
	out.m_z = l.m_z+r.m_z;
	*/

	out.setX(l.getX() + r.getX());
	out.setY(l.getY() + r.getY());
	out.setZ(l.getZ() + r.getZ());

	return out;

}
MyPos subPos(MyPos l, MyPos r) // a~b �Ÿ� ���ϱ� (������ǥ - ������ ��ǥ)
{
	MyPos out;
	/* //��������� private�̹Ƿ� �̷��Դ� ���� �Ұ���
	out.m_x = l.m_x-r.m_x;
	out.m_y = l.m_y-r.m_y;
	out.m_z = l.m_z-r.m_z;
	*/

	out.setX(l.getX() - r.getX());
	out.setY(l.getY() - r.getY());
	out.setZ(l.getZ() - r.getZ());

	return out;
}
float getDist(MyPos l, MyPos r) // a~b �Ÿ� ���� ���ϱ�
{
	MyPos diff = subPos(l,r);
	float l2 = diff.getX()*diff.getX()
				+diff.getY()*diff.getY()
				+diff.getZ()*diff.getZ();

	return sqrt(l2); // ��Ʈ��� return 
}

float MyPos :: length() // �������� �Ÿ� ���ϱ� -> getDist(������ �Ÿ����ϱ�)�� Ȱ���ؼ�
{
	//return getDist(MyPos(m_x,m_y,m_z), MyPos(0,0,0));

	this; // ���� ��Ī�ϴ� �ְ� �ʿ� -> MyPos(m_x,m_y,m_z)�� �ƴ϶� this�����͸� ���
	return getDist( *this, MyPos(0,0,0)); // �������̹Ƿ� this�� �ּҰ��� ����������Ƿ� *this�� �������
}
#include "MyPos.h"
#include<iostream>
using namespace std;

MyPos::MyPos(void)
{
	m_x = 0.0f; m_y = 0.0f; m_z = 0.0f;
}
MyPos::MyPos(float x, float y, float z)
{
	m_x = x; m_y = y; m_z = z;
}

MyPos::~MyPos(void)
{
}

void MyPos::print()
{
	cout<<"("<<m_x<<","<<m_y<<","<<m_z<<")"<<endl;
}

bool MyPos::operator==(const MyPos & r)
{
	if(m_x==r.m_x && m_y==r.m_y && m_z==r.m_z)
		return true;
	return false;
}
MyPos MyPos::operator+(const MyPos &r)
{
	MyPos out;
	out.m_x = m_x + r.m_x;
	out.m_y = m_y + r.m_y;
	out.m_z = m_z + r.m_z;
	return out;
}
// ���ϱ��� �Լ��� �ΰ� ���ڸ� �޴°� �ƴ϶� mypos��� �ΰ��� ��ü�� ���� �� �ֵ��� ����
// ������ ���� mypos�̹Ƿ� mypos operator+��
// & �� ������ ������ī�Ǹ� ���ϰ� �; �װ� �� �����ϱ� ������. --> �Ƚᵵ ���ư�
// & ���� const���°� ����
/*
MyPos operator+ (const MyPos & l,const MyPos & r) //���ϱ��� �Լ��� ȣ�� 
{
	MyPos out;
	out.m_x = l.m_x + r.m_x;
	out.m_y = l.m_y + r.m_y;
	out.m_z = l.m_z + r.m_z;
	return out;
}
*/


MyPos operator- (const MyPos & l, const MyPos & r) 
{
	MyPos out;
	out.m_x = l.m_x - r.m_x;
	out.m_y = l.m_y - r.m_y;
	out.m_z = l.m_z - r.m_z;
	return out;
}
MyPos operator* (const float & l, const MyPos & r) //���ϱ��� �Լ��� ȣ�� 
{
	MyPos out;
	out.m_x = l * r.m_x;
	out.m_y = l * r.m_y;
	out.m_z = l * r.m_z;
	return out;
}
MyPos operator/ (const MyPos & l, const float & r) //���ϱ��� �Լ��� ȣ�� 
{
	MyPos out;
	out.m_x = l.m_x / r;
	out.m_y = l.m_y / r;
	out.m_z = l.m_z / r;
	return out;
}
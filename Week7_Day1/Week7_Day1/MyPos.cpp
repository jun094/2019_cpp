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
// 더하기라는 함수가 두개 숫자만 받는게 아니라 mypos라는 두개의 객체도 받을 수 있도록 정의
// 리턴은 역시 mypos이므로 mypos operator+임
// & 쓴 이유는 데이터카피를 피하고 싶어서 그게 더 빠르니깐 쓴거임. --> 안써도 돌아감
// & 쓰면 const쓰는게 안전
/*
MyPos operator+ (const MyPos & l,const MyPos & r) //더하기라는 함수를 호출 
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
MyPos operator* (const float & l, const MyPos & r) //더하기라는 함수를 호출 
{
	MyPos out;
	out.m_x = l * r.m_x;
	out.m_y = l * r.m_y;
	out.m_z = l * r.m_z;
	return out;
}
MyPos operator/ (const MyPos & l, const float & r) //더하기라는 함수를 호출 
{
	MyPos out;
	out.m_x = l.m_x / r;
	out.m_y = l.m_y / r;
	out.m_z = l.m_z / r;
	return out;
}
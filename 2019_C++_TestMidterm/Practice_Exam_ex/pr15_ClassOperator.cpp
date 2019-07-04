#include "pr15_ClassOperator.h"
#include <iostream> 
#include <iomanip> 
using namespace std;

ClassOperator::ClassOperator(void)
{
	m_x=0;
	m_y=0;
	m_z=0;
}
ClassOperator::ClassOperator(float a, float b, float c)
{
	m_x=a;
	m_y=b;
	m_z=c;
}
ClassOperator::~ClassOperator(void)
{
}

void ClassOperator::show()
{
	cout.precision(2);
	cout<<m_x<<" , "<<m_y<<" , "<<m_z<<" , "<<endl;
}
ClassOperator ClassOperator::operator/(ClassOperator div)
{
	ClassOperator temp;
	temp.m_x = m_x / div.m_x;
	temp.m_y = m_y / div.m_y;
	temp.m_z = m_z / div.m_z;

	return temp;
}

ClassOperator ClassOperator::operator*(ClassOperator mul)
{
	ClassOperator temp;
	temp.m_x = m_x * mul.m_x;
	temp.m_y = m_y * mul.m_y;
	temp.m_z = m_z * mul.m_z;

	return temp;
}
ClassOperator ClassOperator::operator/(float n)
{
	ClassOperator temp;
	temp.m_x = m_x / n;
	temp.m_y = m_y / n;
	temp.m_z = m_z / n;
	return temp;
}
// 여기 그냥 외우자!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
ClassOperator ClassOperator::operator++()
{
	m_x++;m_y++;m_z++;
	return *this;
}
ClassOperator ClassOperator::operator++(int n)
{
	ClassOperator old = *this;
	m_x++;m_y++;m_z++;
	return old;
}
ClassOperator ClassOperator::operator+=(ClassOperator b)
{
	m_x+=b.m_x;
	m_y+=b.m_y;
	m_z+=b.m_z;
	return *this;
}
bool ClassOperator::operator==(ClassOperator b)
{
	if(m_x==b.m_x &&
		m_y==b.m_y &&
		m_z==b.m_z) return true;
	else return false;
}


//클래스 외 함수부분
ClassOperator operator*(float n,ClassOperator r)
{
	ClassOperator result;
	result.m_x = n*r.m_x;
	result.m_y = n*r.m_y;
	result.m_z = n*r.m_z;

	return result;
}

ClassOperator operator+(ClassOperator l, ClassOperator r)
{
	ClassOperator result;
	result.m_x = l.m_x+r.m_x;
	result.m_y = l.m_y+r.m_y;
	result.m_z = l.m_z+r.m_z;

	return result;
}
ClassOperator operator-(ClassOperator l, ClassOperator r)
{
	ClassOperator result;
	result.m_x = l.m_x-r.m_x;
	result.m_y = l.m_y-r.m_y;
	result.m_z = l.m_z-r.m_z;

	return result;
}
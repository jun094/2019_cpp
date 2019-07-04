#include<iostream>
using namespace std;

int g_circleCount = 0;

#include "Circle.h"

Circle::Circle() 
{
	x=0;
	y=0;
	r=1; 

	g_circleCount++;
	num = g_circleCount;
}
Circle::Circle(int _x, int _y, float _r)
{
	//x = _x;
	//y = _y;
	setX(_x);
	setY(_y);

	r = _r;

	g_circleCount++;
	num = g_circleCount;
}

Circle:: ~Circle() 
{
	cout<< "Circle " <<num << " is dying .." << endl; // �״� ������ �����ϰ�

	g_circleCount --; // ���� �����ϴ� ��ü�� ���� -> circleCount�� ������ ���� �� �ϳ��� ���̸� �ǹ� ����
}

void Circle::draw()
{
	cout << "Circle " << num << " [" << x << " , " << y << "] : " << r <<endl;
}

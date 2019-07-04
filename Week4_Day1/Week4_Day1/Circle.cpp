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
	cout<< "Circle " <<num << " is dying .." << endl; // 죽는 순서는 랜덤하게

	g_circleCount --; // 지금 존재하는 객체의 갯수 -> circleCount의 개수를 죽을 때 하나씩 줄이면 의미 동일
}

void Circle::draw()
{
	cout << "Circle " << num << " [" << x << " , " << y << "] : " << r <<endl;
}

#include<iostream>

using namespace std;

#include "MyPos.h"

int main()
{
	MyPos a(10,20,30);
	MyPos b(30,40,50);

	a.draw();
	b.draw();

	// a,b 좌표 합 구하기
	MyPos c = addPos(a,b);
	c.draw();

	// a의 길이 = a~원점 거리 = getDist(a, MyPos(0,0,0))
	a.length(); 
	return 0;
}
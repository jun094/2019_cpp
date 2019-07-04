#include<iostream>
using namespace std;

#include "Circle.h"   // 클래스는 따로 헤더파일로 뺀다.
				      // 사용자에게 보여줄 부분만
					  // 단순 ctrl + c , ctrl + v

#include "Circle.h"  // 이렇게 되면 당연히 에러가 떠야함
#include "Circle.h"  // 그러나, 헤더파일에서 조건을 걸어줌 -> Circle.h로

void func();
int main ()
{
	Circle a(10,30,50);
	Circle b;
	
	Circle c(120,120,10); //setter 사용하고 싶음....


	a.draw();
	b.draw();
	c.draw();
	//cout<<"1번 원 반지름"<<a.r<<endl //이런식으로 반지름을 알고싶지만 private이므로 알 수가 없음

	cout<<"반지름의 합계=:"<<a.getR() + b.getR()<<endl;

	func(); 

	return 0;
}

void func()
{
	Circle d;
	d.draw();
}
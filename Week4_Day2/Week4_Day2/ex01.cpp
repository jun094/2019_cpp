#include<iostream>

using namespace std;

#include "MyRect.h"
#include "MyCircle.h"

void func(MyRect *p)
{
	p->setPos(40,40);
}

int main()
{
	//int arr[10]; // 정적 배열
	//int *arr =(int *) malloc(sizeof(int)*10); //동적 배열 ( 메모리 크기를 모를떄 )
	
	//free(arr); // 동적배열 쓰고 지워줌

	// c++에서 동적배열하는 법 ->  new-delete
	int * arr = new int[10];
	delete [] arr; // 다 쓰고 지워줌 ( 배열로 만들면 배열로 지워줌 )

	int * pi = new int;
	delete pi; // 하나만 만들면 하나만 지워줌

	// 클래스형 포인터를 동적할당 할 수 있다. 
	MyRect * rectArr = new MyRect[3]; //배열로 만들어줌
	delete [] rectArr;

	MyRect * pRect = new MyRect(10,30,40,50);
	delete pRect;
	/////////////////////////////////////////////////////////////////////////////////////////
	
	// 유튜브 강의
	MyRect *ptr_class = new MyRect(10,10,25,25);
	ptr_class->draw(); // (*ptr_class).draw() 와 같은 의미이다..!!

	delete ptr_class;
	
	/////////////////////////////////////////////////////////////////////////////////////////////
	
	MyRect a(20,30);
	a.draw();
	
	MyRect * p = &a; // * : ~로가서,  . : 문을 연다. 
	p->draw();  
	p->draw();


	//
	MyCircle b;
	void * q = &b; //int *q 도 아니고, MyReact *p도 아님 --> 데이터 타입이 없는 포인터는 아무 의미가 없다..!
	
	(*(MyCircle*)q).x = 100; // 이렇게 나중에 x에 직접 접근할꺼아니면 .. void가 아닌 데이터 타입을 무조건 써주자.!
	

	func(&a);
	a.draw();
	

	return 0;
}
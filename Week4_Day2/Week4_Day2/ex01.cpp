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
	//int arr[10]; // ���� �迭
	//int *arr =(int *) malloc(sizeof(int)*10); //���� �迭 ( �޸� ũ�⸦ �𸦋� )
	
	//free(arr); // �����迭 ���� ������

	// c++���� �����迭�ϴ� �� ->  new-delete
	int * arr = new int[10];
	delete [] arr; // �� ���� ������ ( �迭�� ����� �迭�� ������ )

	int * pi = new int;
	delete pi; // �ϳ��� ����� �ϳ��� ������

	// Ŭ������ �����͸� �����Ҵ� �� �� �ִ�. 
	MyRect * rectArr = new MyRect[3]; //�迭�� �������
	delete [] rectArr;

	MyRect * pRect = new MyRect(10,30,40,50);
	delete pRect;
	/////////////////////////////////////////////////////////////////////////////////////////
	
	// ��Ʃ�� ����
	MyRect *ptr_class = new MyRect(10,10,25,25);
	ptr_class->draw(); // (*ptr_class).draw() �� ���� �ǹ��̴�..!!

	delete ptr_class;
	
	/////////////////////////////////////////////////////////////////////////////////////////////
	
	MyRect a(20,30);
	a.draw();
	
	MyRect * p = &a; // * : ~�ΰ���,  . : ���� ����. 
	p->draw();  
	p->draw();


	//
	MyCircle b;
	void * q = &b; //int *q �� �ƴϰ�, MyReact *p�� �ƴ� --> ������ Ÿ���� ���� �����ʹ� �ƹ� �ǹ̰� ����..!
	
	(*(MyCircle*)q).x = 100; // �̷��� ���߿� x�� ���� �����Ҳ��ƴϸ� .. void�� �ƴ� ������ Ÿ���� ������ ������.!
	

	func(&a);
	a.draw();
	

	return 0;
}
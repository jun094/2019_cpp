#include<iostream>
using namespace std;

#include "Circle.h"   // Ŭ������ ���� ������Ϸ� ����.
				      // ����ڿ��� ������ �κи�
					  // �ܼ� ctrl + c , ctrl + v

#include "Circle.h"  // �̷��� �Ǹ� �翬�� ������ ������
#include "Circle.h"  // �׷���, ������Ͽ��� ������ �ɾ��� -> Circle.h��

void func();
int main ()
{
	Circle a(10,30,50);
	Circle b;
	
	Circle c(120,120,10); //setter ����ϰ� ����....


	a.draw();
	b.draw();
	c.draw();
	//cout<<"1�� �� ������"<<a.r<<endl //�̷������� �������� �˰������ private�̹Ƿ� �� ���� ����

	cout<<"�������� �հ�=:"<<a.getR() + b.getR()<<endl;

	func(); 

	return 0;
}

void func()
{
	Circle d;
	d.draw();
}
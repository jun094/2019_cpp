#include<iostream>

using namespace std;

// string Ŭ������ ���� �ѹ� ����� ����..!!

#include "MyString.h"

int main()
{
	MyString a("Sejong");
	MyString b("Univer");

	// a.add(b);

	MyString c = b; // c�� b�� ����
	c.add(a); // c�� a���ڿ� �߰�
	
	cout<<a.getStr()<<endl;
	cout<<b.getStr()<<endl;
	cout<<c.getStr()<<endl;
	return 0;
}
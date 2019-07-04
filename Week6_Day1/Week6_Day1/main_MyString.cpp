#include<iostream>

using namespace std;

// string 클래스를 내가 한번 만들어 보자..!!

#include "MyString.h"

int main()
{
	MyString a("Sejong");
	MyString b("Univer");

	// a.add(b);

	MyString c = b; // c에 b를 복사
	c.add(a); // c에 a문자열 추가
	
	cout<<a.getStr()<<endl;
	cout<<b.getStr()<<endl;
	cout<<c.getStr()<<endl;
	return 0;
}
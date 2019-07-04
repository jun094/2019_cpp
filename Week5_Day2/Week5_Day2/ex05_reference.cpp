#include<iostream>

using namespace std;

//reference;
int main()
{
	int i=10;
	int *p;
	p = &i;

	int &r = i; // reference 변수 = "별명"
				// 별명은 대상이 있어야 만들 수 있음 -> i가 있어야 존재가 가능함.  -> r은 i의 "별명"
				// 목적 : ????
	r=50;

	cout<<i<<endl;

	return 0;
}
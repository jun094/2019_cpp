#include<iostream>

using namespace std;

int a=10;

int findA()
{
	return a;
}

int &findB() //레퍼런스 함수
{
	return a;
}
int main()
{
	int b = findA(); // 이거는 당연히 10
	//findA() = 20; // 10 = 20 과 같은 의미임 -> 당연히 error
	findB() = 20;
	

	cout<<findB()<<endl;



	return 0;
}
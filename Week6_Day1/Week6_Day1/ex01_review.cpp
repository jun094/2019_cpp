#include<iostream>

using namespace std;

int a=10;

int findA()
{
	return a;
}

int &findB() //���۷��� �Լ�
{
	return a;
}
int main()
{
	int b = findA(); // �̰Ŵ� �翬�� 10
	//findA() = 20; // 10 = 20 �� ���� �ǹ��� -> �翬�� error
	findB() = 20;
	

	cout<<findB()<<endl;



	return 0;
}
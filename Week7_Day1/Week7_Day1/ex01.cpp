#include<iostream>

using namespace std;

int main()
{

	int a = 10;
	int b = 20;
	int c = 30;
	int d;
	d = a + b + c; // 여기서 연산자는 =, +
	// a+b --> 컴퓨터에서는 :  +(a,b) -> +먼저 받고 그 다음 a,b를 받아들임
	// a+b+c --> +( +(a,b) , c )
	// d=c --> =(d,c)
	// 이러한 사칙연산 연산자들은 2개의 숫자를 받고 1개의 숫자로 return함    // +,-,/,*,==,>,<   binary op
	//																    // !,++,--			 uary op
	//																    // a?b:c			 trinary op

	return 0;
}
//#include<iostream>
//
//// 그러면 연산자를 내가 정의할 수 있을까?
//using namespace std;
//#include "pr15_ClassOperator.h"
//
//int main()
//{
//	//+,- --> friend로 외부함수
//	//*,/ --> friend안쓰고
//	// a++, ++a 연산자 써보기
//
//	ClassOperator a(10,20,30);
//	ClassOperator b(1,2,3);
//
//	ClassOperator sum=a+b;
//	ClassOperator sub=a-b;
//	ClassOperator div=a/b;
//	ClassOperator mul=a*b;
//	ClassOperator c = (3*a + b)/4;
//
//	a.show(); b.show();
//	sum.show(); sub.show(); 
//	div.show(); mul.show();
//	c.show();
//
//	cout<<endl;
//	ClassOperator front;
//	a.show(); front.show();
//
//	front = ++a;
//	a.show(); front.show();
//	
//	cout<<endl;
//	ClassOperator behind;
//	b.show(); behind.show();
//
//	behind = b++;
//	b.show(); behind.show();
//
//	cout<<endl;
//	a.show(); b.show();
//	a+=b;
//	a.show();
//
//	cout<<endl;
//	if(a==b) cout<<"동일"<<endl;
//	else cout<<"미동일"<<endl;
//}
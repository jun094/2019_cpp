//#include<iostream>
//
//// �׷��� �����ڸ� ���� ������ �� ������?
//using namespace std;
//#include "pr15_ClassOperator.h"
//
//int main()
//{
//	//+,- --> friend�� �ܺ��Լ�
//	//*,/ --> friend�Ⱦ���
//	// a++, ++a ������ �Ẹ��
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
//	if(a==b) cout<<"����"<<endl;
//	else cout<<"�̵���"<<endl;
//}
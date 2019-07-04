#include<iostream>

// 그러면 연산자를 내가 정의할 수 있을까?
using namespace std;

#include"MyPos.h"

int main()
{
	MyPos a(10,10,10);
	MyPos b(20,20,20);
	MyPos c;
	MyPos d;
	MyPos e;

	c = a + b; //이제 숫자뿐만 아니라 MyPos객체도 더 할 수 있다.
	d = a - b + c ;
	e = 3*a + b/4;

	c.print();
	d.print();
	e.print();



	if(a==a) cout<<"same!"<<endl;
	else     cout<<"not same!"<<endl;
	a = c = b;
	cout<<a[1]<<endl;
	for(int i=0; i<3; i++)
		a[i] = i*3;
	a.print();

	c = a += b;

	//cout << c;

	return 0;
}
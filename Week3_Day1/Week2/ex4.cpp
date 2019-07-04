#include<iostream>

using namespace std;

void  func (int a[]) //배열을 받을때는 반드시 이렇게 써서 받아주자
{

}

void  func2 (int a[][5]) //2차원 배열은 이렇게 써주자 ( 단, 몇 묶음으로 들어오는지는 반드시 써주어야 한다..!!!!!)
{

}

void  func3 (int a[][2][6]) //3차원 배열 역시 몇 묶음인지가 중요
{

}

void func4(char * c)
{
	cout<<c<<endl;
}
int main()
{
	int n[10];
	int m[2][5];
	int l[3][2][6];

	char c[100]="김철수";
	//c="김철수";

	func(n);
	func2(m);
	func3(l);
	func4(c);

	return 0;
}
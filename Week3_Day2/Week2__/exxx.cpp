#include<iostream>

using namespace std;


void print(char *c)
{
	cout << c <<endl;
}
void print2(char c[])
{
	cout << c <<endl;
}
void print3(string c)
{
	cout << c <<endl;
}
int main()
{

	print("���ؿ�");
	print2("���ؿ�2");
	print3("���ؿ�3");
}
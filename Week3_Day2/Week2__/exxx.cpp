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

	print("최준영");
	print2("최준영2");
	print3("최준영3");
}
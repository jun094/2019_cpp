#include<iostream>

using namespace std;

void swap(int *swap_a, int *swap_b)
{
	int temp=0;
	temp = *swap_a;
	*swap_a = *swap_b;
	*swap_b = temp;
}
int main()
{
	int a=1,b=2;

	swap(&a,&b);

	cout<<a<<" "<<b;
	return 0;
}
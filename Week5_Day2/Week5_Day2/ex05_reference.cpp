#include<iostream>

using namespace std;

//reference;
int main()
{
	int i=10;
	int *p;
	p = &i;

	int &r = i; // reference ���� = "����"
				// ������ ����� �־�� ���� �� ���� -> i�� �־�� ���簡 ������.  -> r�� i�� "����"
				// ���� : ????
	r=50;

	cout<<i<<endl;

	return 0;
}
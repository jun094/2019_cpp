#include<iostream>
#include<stdio.h>


using namespace std;

int main()
{
	/*
	int *a;
	a = new int(10);

	delete a; 
	*/

	int *arr; // *(&arr[0]) : ������ �迭
	int len;

	cin >> len ;

	arr = new int[len]; // int���� �迭�� len��ŭ ����µ� �� �ּ�(new)�� arr�� ������ --> arr�� �������̴ϱ� �ּҰ� ����Ǿ�� ��.

	for(int i=0;i<len;i++)
	{
		/*
		int arr[10];
		int *p;
		p = arr; // p[2] = arr[2]�̴� !!!
		*/
		arr[i] = i; //����, �ֵ� �̷������� arr�� ������������ �迭ó�� ����� �����ϴ�..!!!!! �߿� !!!!!!!!!!!!!!!!!!
	}

	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}

	delete[] arr; // delete arr �ϰ� �Ǹ� arr�� �迭�� ù��°�� ����Ű�Ƿ� ù��°�� �����
	return 0;
}
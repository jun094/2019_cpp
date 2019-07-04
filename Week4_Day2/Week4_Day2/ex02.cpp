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

	int *arr; // *(&arr[0]) : 포인터 배열
	int len;

	cin >> len ;

	arr = new int[len]; // int형의 배열을 len만큼 만드는데 그 주소(new)를 arr에 보내라 --> arr은 포인터이니깐 주소가 저장되어야 함.

	for(int i=0;i<len;i++)
	{
		/*
		int arr[10];
		int *p;
		p = arr; // p[2] = arr[2]이다 !!!
		*/
		arr[i] = i; //따라서, 애도 이런식으로 arr은 포인터이지만 배열처럼 사용이 가능하다..!!!!! 중요 !!!!!!!!!!!!!!!!!!
	}

	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<" ";
	}

	delete[] arr; // delete arr 하게 되면 arr은 배열의 첫번째만 가리키므로 첫번째만 사라짐
	return 0;
}
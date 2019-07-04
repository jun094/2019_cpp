#include<iostream>

using namespace std;

int main()
{
	/*
	int a = 10;	
	int *p = &a; // 이게 올바른 표현
	int * q;
	q=&a; // 이건 올바르지 않은 표현

	// 만약, 포인터를 선언하기는 했지만 아직 누구를 가르킬지 모르겠다면?
	int * q = NULL; // 또는 nullptr
	*/

	/////////////////////////////////////////////////////////////////////////
	
	// 동적 메모리 할당 -> 배열, 변수 한개
	/*
	int * arr = new int[10]; // 길이가 10인 배열을 가리키는 포인터
	delete [] arr;

	int *p = new int;
	delete p;
	*/

	// 동적 vs 정적배열
	/*
	const int max_arr = 1000000;
	//int arr[max_arr]; // 이렇게 정적 배열은 main안에서 만들므로 (main->stack, main밖 함수 -> heap) stack에 저장되어 1000000 stackoverflow가 나타남.
	int * arrr = new int[max_arr]; // 그러나 이렇게 포인터로 정적배열로 만들면 heap에 만들므로 휘발성이기 떄문에 저장이 한번 됐다가 다시 지워짐
	*/

	//
	/////////////////////////////////////////////////////////////////////////
	return 0;
}
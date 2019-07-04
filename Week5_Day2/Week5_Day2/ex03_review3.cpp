//#include<iostream>
//
//using namespace std;
//
//void func1(int arr[]) // 포인터 표현 == void func1(int * arr)
//{
//
//}
//// 20개씩 n묶음 -> 2차원일때는 몇개씩만 인자로 보냄!!
//void func2(int arr[][20]) // 포인터 표현 != void func2(int ** arr)   --> 2차원 배열은 포인터로 못 받는다.!!!!!!! 
//{
//	arr[1][3]=30;
//}
//
//void func3(int **arr,int m,int n) // 이차원 배열을 포인터로 받고 싶다면??? -> 동적으로 (func2는 정적으로)
//{
//	arr[1][3]=30;
//}
//
//int main()
//{
//	int arr[10][20];
//	int *q = &arr[0][0];
//
//	arr[1][3] = 30;
//
//
//	
//	return 0;
//}
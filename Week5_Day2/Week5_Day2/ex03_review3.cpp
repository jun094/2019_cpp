//#include<iostream>
//
//using namespace std;
//
//void func1(int arr[]) // ������ ǥ�� == void func1(int * arr)
//{
//
//}
//// 20���� n���� -> 2�����϶��� ����� ���ڷ� ����!!
//void func2(int arr[][20]) // ������ ǥ�� != void func2(int ** arr)   --> 2���� �迭�� �����ͷ� �� �޴´�.!!!!!!! 
//{
//	arr[1][3]=30;
//}
//
//void func3(int **arr,int m,int n) // ������ �迭�� �����ͷ� �ް� �ʹٸ�??? -> �������� (func2�� ��������)
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
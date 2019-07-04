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
//	//int * q = (int *)arr; 
//
//	func2(arr); //보낼때는 이름만 보내면 됨!!
//	cout<<q[20+3]<<endl;
//
//	
//	
//	int m = 10;
//	int n = 20;
//	int** p = new int * [m];		// double pointer
//	for(int i=0; i<m; i++)
//		p[i] = new int[n];
//	
//	func3(p, m, n); // 여기도 보낼떄는 이름만 보내면 됨!!
//
//	for(int i=0; i<m; i++)
//		delete [] p[i];
//	delete [] p;
//
//	
//	return 0;
//}
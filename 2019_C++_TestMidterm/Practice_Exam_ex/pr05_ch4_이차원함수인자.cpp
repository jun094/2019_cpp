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
//	//int * q = (int *)arr; 
//
//	func2(arr); //�������� �̸��� ������ ��!!
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
//	func3(p, m, n); // ���⵵ �������� �̸��� ������ ��!!
//
//	for(int i=0; i<m; i++)
//		delete [] p[i];
//	delete [] p;
//
//	
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	// 동적&동적 배열 생성
//	int m=10;
//	int n=30;
//
//	int **p  = new int * [m]; // 이것도 동적으로
//
//	for(int i=0;i<10;i++)
//	{
//		p[i] = new int[n]; // 이것도 동적으로 생성
//	}
//
//
//	for(int i=0;i<10;i++)
//		delete[] p[i];
//	delete [] p; // 이중 포인터는 delete 두번
//	return 0;
//}
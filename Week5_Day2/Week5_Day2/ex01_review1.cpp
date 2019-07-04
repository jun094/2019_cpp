//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	// 정적&동적 배열 생성
//	int *p[10]; // 20개씩 10묶음일때 20개를 가리키는 1개의 포인터 생성-> int형 포인터 10개는 정적으로 생성
//
//	for(int i=0;i<10;i++)
//	{
//		p[i] = new int[20]; // 이거는 동적으로 생성
//	}
//	for(int i=0;i<10;i++)
//	{
//		for(int j=0;j<20;j++)
//		{
//			p[i][j]=i*j;
//			cout<<i<<" * " << j << " = " << p[i][j]<<endl;
//		}
//	}
//
//	for(int i=0;i<10;i++)
//		delete[] p[i];
//
//	return 0;
//}
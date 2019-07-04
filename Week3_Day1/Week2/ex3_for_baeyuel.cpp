//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	/*
//	int elm;
//	for(int i=0;i<10;i++)
//	{
//		cout<<elm<endl;
//	}
//	*/
//
//	/* 최근에 생긴 for_each문 (2010에서는 안돌아감)
//	for_each(int elm : a)
//		cout<<elm<endl;
//	*/
//
//	int m[2][5];
//	int *n = &m[0][0];
//	int s=0;
//
//	for(int i=0;i<2;i++)
//	{
//		for(int j=0;j<5;j++)
//		{
//			n[5*i + j] = s;  // 5*i+j 는 각 행의 첫번쨰 열 부터 차례로 열을 읽음
//			cout<<m[i][j]<<endl;
//			s++;
//		}
//	}
//
//	return 0;
//}
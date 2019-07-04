//#include "Sample.h"
//#include<iostream>
//
//using namespace std;
//
//Sample::Sample(void)
//{
//	m_p = new int[10]; // 정수를 입력하지 않을 경우 임시로 10개의 배열 동적할당.
//
//	for(int i=0;i<10;i++)
//	{
//		m_p[i] = 0;
//	}
//}
//
//Sample::Sample(int size)
//{
//	m_size = size;
//	m_p = new int[m_size]; // n개 정수 배열의 동적생성
//}
//
//Sample::~Sample(void)
//{
//	delete [] m_p; // 소멸자에서 delete를 해준다. 
//}
//
//void Sample::read() // 동적 할당받은 정수 배열 p에 사용자로부터 정수를 입력 받음
//{
//	for(int i=0;i<m_size;i++)
//	{
//		cin>>m_p[i];
//	}	
//}
//
//void Sample::write() // 정수 배열을 화면에 출력
//{
//	for(int i=0;i<m_size;i++)
//	{
//		cout<<m_p[i]<<" ";
//	}
//	cout<<endl;
//}
//
//int Sample::big() // 정수 배열에서 가장 큰 수 리턴
//{
//	int num=m_p[0];
//
//	for(int i=0;i<m_size;i++)
//	{
//		num = (num>m_p[i]) ? num : m_p[i];
//	}
//
//	return num;
//}

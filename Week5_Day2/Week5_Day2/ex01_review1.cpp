//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	// ����&���� �迭 ����
//	int *p[10]; // 20���� 10�����϶� 20���� ����Ű�� 1���� ������ ����-> int�� ������ 10���� �������� ����
//
//	for(int i=0;i<10;i++)
//	{
//		p[i] = new int[20]; // �̰Ŵ� �������� ����
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
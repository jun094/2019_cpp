//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	// ����&���� �迭 ����
//	int m=10;
//	int n=30;
//
//	int **p  = new int * [m]; // �̰͵� ��������
//
//	for(int i=0;i<10;i++)
//	{
//		p[i] = new int[n]; // �̰͵� �������� ����
//	}
//
//
//	for(int i=0;i<10;i++)
//		delete[] p[i];
//	delete [] p; // ���� �����ʹ� delete �ι�
//	return 0;
//}
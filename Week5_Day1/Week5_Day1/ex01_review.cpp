#include<iostream>

using namespace std;

int main()
{
	/*
	int a = 10;	
	int *p = &a; // �̰� �ùٸ� ǥ��
	int * q;
	q=&a; // �̰� �ùٸ��� ���� ǥ��

	// ����, �����͸� �����ϱ�� ������ ���� ������ ����ų�� �𸣰ڴٸ�?
	int * q = NULL; // �Ǵ� nullptr
	*/

	/////////////////////////////////////////////////////////////////////////
	
	// ���� �޸� �Ҵ� -> �迭, ���� �Ѱ�
	/*
	int * arr = new int[10]; // ���̰� 10�� �迭�� ����Ű�� ������
	delete [] arr;

	int *p = new int;
	delete p;
	*/

	// ���� vs �����迭
	/*
	const int max_arr = 1000000;
	//int arr[max_arr]; // �̷��� ���� �迭�� main�ȿ��� ����Ƿ� (main->stack, main�� �Լ� -> heap) stack�� ����Ǿ� 1000000 stackoverflow�� ��Ÿ��.
	int * arrr = new int[max_arr]; // �׷��� �̷��� �����ͷ� �����迭�� ����� heap�� ����Ƿ� �ֹ߼��̱� ������ ������ �ѹ� �ƴٰ� �ٽ� ������
	*/

	//
	/////////////////////////////////////////////////////////////////////////
	return 0;
}
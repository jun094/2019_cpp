#include<iostream>

using namespace std;

int main()
{
	const int w = 20;
	const int h = 30;
	int m[h][w]; // 20���� 30�� !

	for(int y=0;y<h;y++) // 30w���� ���߿� ��´�. (�׷��� y ���� ����. )
	{
		for(int x=0;x<w;x++) // 20���� ���� ���
		{
			m[y][x]=0;  // �� ������ �������!
		}
	}

	/*
	int[2][5] 
	 0 0 0 0 0    // 5���� ������ ���߿� 2�� !!
	 0 0 0 0 0 
	*/



	////////////////////////
	return 0;
}
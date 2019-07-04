#include<iostream>

using namespace std;

int main()
{
	const int w = 20;
	const int h = 30;
	int m[h][w]; // 20개씩 30줄 !

	for(int y=0;y<h;y++) // 30w줄을 나중에 찍는다. (그래서 y 먼저 쓴다. )
	{
		for(int x=0;x<w;x++) // 20개를 먼저 찍고
		{
			m[y][x]=0;  // 이 순서를 기억하자!
		}
	}

	/*
	int[2][5] 
	 0 0 0 0 0    // 5개씩 보내고 나중에 2줄 !!
	 0 0 0 0 0 
	*/



	////////////////////////
	return 0;
}
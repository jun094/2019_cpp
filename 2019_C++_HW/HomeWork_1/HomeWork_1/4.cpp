#include<iostream>

using namespace std;

int main()
{
	float num[5],temp=0;

	cout << "5개의 실수를 입력하라>> " ;

	for(int i=0;i<5;i++)
	{
		cin >> num[i];	
	}

	temp = num[0];
	/*
	for(int i=0;i<5;i++)
	{
		if(num[i] >= temp)
		{
			temp = num[i];
		}
	}*/


	for(int i=0;i<5;i++)
	{
		temp= temp>num[i] ? temp>num[i];
	}

	cout << "제일 큰 수 = "<< temp<<endl;
	return 0;
}
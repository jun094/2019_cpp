#include<iostream>

using namespace std;

int main()
{
	float num[5],temp=0;

	cout << "5���� �Ǽ��� �Է��϶�>> " ;

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

	cout << "���� ū �� = "<< temp<<endl;
	return 0;
}
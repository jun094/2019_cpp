#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	string str[5]; 
	int len[5],best_len=0,best=0;
	int num=1;

	cout<<"5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���"<<endl;

	for(int i=0;i<5;i++)
	{
		getline(cin, str[i], ';'); 
	}

	for(int i=0;i<5;i++)
	{
		cout<< num << " : " << str[i] <<endl;

		len[i]=str[i].length();
		if(len[i]>best_len)
		{
			best=i;
			best_len=len[i];
		}
		num++;
	}

	cout<<"���� �� �̸��� "<<str[best]<<endl;

	return 0;
}
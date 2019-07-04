#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	string name[5];

	for(int i=0;i<5;i++)
	{
		getline(cin,name[i],';');
	}
	for(int i=0;i<5;i++)
	{
		// a~z -> A~Z
		for(int j=0;j<name[i].length();j++)
		{
			if( name[i].at(j) >= 'a' && name[i][j] <= 'z')
			{
				name[i][j] -= 'a'-'A';
			}
		}

		cout<<name[i]<<endl;
	}


	return 0;
}
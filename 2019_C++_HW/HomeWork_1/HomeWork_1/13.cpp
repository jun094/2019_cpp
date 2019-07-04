#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	string str[3]; 

	while(1)
	{
		cout<<"? ";
		for(int i=0;i<3;i++)
		{
			getline(cin,str[i],' ');
		}
		getchar();

		if(str[1].compare("+")==0)
			cout<<str[0]<<" + "<<str[2]<<" = "<<atoi(str[0].c_str())+atoi(str[2].c_str())<<endl; 
		else if(str[1].compare("-")==0)
			cout<<str[0]<<" - "<<str[2]<<" = "<<atoi(str[0].c_str())-atoi(str[2].c_str())<<endl; 
		else if(str[1].compare("*")==0)
			cout<<str[0]<<" * "<<str[2]<<" = "<<atoi(str[0].c_str())*atoi(str[2].c_str())<<endl; 
		else if(str[1].compare("/")==0)
			cout<<str[0]<<" / "<<str[2]<<" = "<<atoi(str[0].c_str())/atoi(str[2].c_str())<<endl; 
		else 
			cout<<str[0]<<" % "<<str[2]<<" = "<<atoi(str[0].c_str())%atoi(str[2].c_str())<<endl; 

	}


	return 0;
}
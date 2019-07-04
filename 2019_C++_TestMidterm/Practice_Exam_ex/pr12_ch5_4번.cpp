//#include<iostream>
//
//using namespace std;
//
//char& find(char a[],char c, bool& success)
//{
//	int len = strlen(a);
//
//	for(int i=0;i<len;i++)
//	{
//		if(a[i]==c)	
//		{
//			success = true;
//		}
//		else
//		{
//			success = false;
//		}
//	}
//	return c;
//}
//int main()
//{
//	char s[] = "mike";
//	bool b = false;
//
//	char& loc = find(s,'m',b);
//	if(b==false) {
//		cout<<"m을 발견할 수 없다"<<endl;
//		return 0;
//	}
//
//	loc = 'm';
//	cout<<s<<endl;
//	return 0;
//}
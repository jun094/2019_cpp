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
//		cout<<"m�� �߰��� �� ����"<<endl;
//		return 0;
//	}
//
//	loc = 'm';
//	cout<<s<<endl;
//	return 0;
//}
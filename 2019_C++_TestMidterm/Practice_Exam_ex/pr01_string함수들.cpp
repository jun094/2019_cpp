//#include<iostream>
//#include<cstring>
//#include <string>
//#include<stdlib.h>
//
//using namespace std;
//
//int main()
//{
//	//char pw[5];
//	//char address[100];
//	//string str;
//	
//	// 0. .compare("비교문자")
//	//str[1].compare("+")==0
//
//	//// 1. strcmp : 문자열 동일하면 0 , 아니면 1
//	//cin >> pw;
//	//if(strcmp(pw,"1234") == 0 ) { cout<<"맞습니다..!"<<endl; }
//	//else { cout<<"틀렸습니다..!"<<endl; }
//	//getchar();
//	//
//
//
//	//// 2. cin.getline(변수명,길이,구분문자) 
//	//cin.getline(address,100,'\n'); // 99개 길이 \n(엔터) 만날때 까지 저장
//	//cout<<address<<endl;
//	//// string에 저장하는법
//	//getline(cin,str);
//	//cout<<str<<endl;
//
//
//	//// 3. strcpy : 문자열 복사
//	//char name[10];
//	//strcpy(name,"최준영");
//	//cout<<name<<endl;
//
//	// 4. .append : 문자열 이어붙히기
	/*void put(string add)
	{
		m_Psen->append(add);
	}*/


//	//// 연습문제 9
//	//char name[100];
//	//char address[10];
//	//int age;
//
//	//cin.getline(name,100,'\n'); 
//	//cin.getline(address,100,'\n'); 
//	//cin>>age;
//	//	
//	//cout<<name<<" , "<<address<<" , "<<age<<endl;
//
//	//// 연습문제 14
//	//char sen[1000];
//	//int alpha[26];
//	//char alphabet;
//	//int len=0,count=0;
//	//
//	//cin.getline(sen,1000,';');
//	////strlen() : 배열의 길이
//	//len = strlen(sen);
//
//	//for(int i=0;i<26;i++)
//	//{
//	//	alpha[i]=0;
//	//}
//
//	////a:97 , z:122, A:65, Z:90
//	//for(int i=0;i<len;i++)
//	//{
//	//	if(sen[i]>=65 && sen[i] <= 90)
//	//	{
//	//		sen[i]+=32;
//	//	}
//	//	if(sen[i]>=97 && sen[i]<=122)
//	//	{
//	//		count++;
//	//		// a: 97-97=0, b: 98-97=1, ...
//	//		alpha[ sen[i]-97 ]++;
//	//	}
//
//	//}
//
//	//cout<<"알파벳 개수 "<<count<<endl;
//	//
//	//for(int i=0;i<26;i++)
//	//{
//	//	alphabet = i+97;
//	//	cout<<alphabet<<" "<<alpha[i]<<" ";
//	//	
//	//	for(int j=0;j<alpha[i];j++)
//	//	{ 
//	//		cout<<"*"; 
//	//	}
//	//	cout<<endl;
//	//}
//
//
//
//	/*int a=5, b=10, c;
//	c=(a+b,a-b);
//	cout<<c;*/
//	return 0;
//}
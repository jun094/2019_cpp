//#include<iostream>
//#include<string>
//#include<cstring>
//
//using namespace std;
//
//int main()
//{
//	string str; 
//	string str_best;
//
//	int cnt=0; // 각 이름의 길이를 저장하는 변수 
//	int cnt_best=0; // 이름 길이의 최대값을 저장하는 변수
//	int temp=0,num=1,count=0;
//
//	cin >> str; // 전체 문자열 받기
//	
//
//	int len = str.length(); //전체 문자열 길이
//
//	for(int i=0;i<len;i++)
//	{
//		if(str[i] == ';') // 
//		{
//			cout << num << " : " ; // 이름 앞에 넘버링
//
//			for(int j=temp;j<i;j++)
//			{
//				cout << str[j]; // ; 만날때마다 이름 출력
//			}
//			temp=i+1; // 다음이름의 첫 위치 기억
//			num++;
//
//			cout << endl;
//		}
//	}
//
//	temp =0;
//	for(int i=0;i<len;i++)
//	{
//		if(str[i] == ';') 
//		{
//			for(int j=temp;j<i;j++)
//			{
//				cnt++; // 각 이름의 길이
//			}
//			if(cnt>cnt_best)
//			{
//				//count=0;
//				for(int j=temp;j<i;j++)
//				{
//					str_best = str.substr(temp,cnt); // sring형에서 문자열 추출함수인 substr을 사용 -> substr(시작점,길이)
//					//str_best[count]=str[j];
//					//count++;
//				}
//				cnt_best=cnt;
//			}
//			cnt=0; //비교 후 무조건 0으로 초기화
//			temp=i+1; // 다음이름의 첫 위치 기억
//		}
//	}
//
//	cout << str_best << endl;
//
//	return 0;
//}
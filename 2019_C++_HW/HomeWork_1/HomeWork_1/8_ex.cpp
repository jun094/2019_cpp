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
//	int cnt=0; // �� �̸��� ���̸� �����ϴ� ���� 
//	int cnt_best=0; // �̸� ������ �ִ밪�� �����ϴ� ����
//	int temp=0,num=1,count=0;
//
//	cin >> str; // ��ü ���ڿ� �ޱ�
//	
//
//	int len = str.length(); //��ü ���ڿ� ����
//
//	for(int i=0;i<len;i++)
//	{
//		if(str[i] == ';') // 
//		{
//			cout << num << " : " ; // �̸� �տ� �ѹ���
//
//			for(int j=temp;j<i;j++)
//			{
//				cout << str[j]; // ; ���������� �̸� ���
//			}
//			temp=i+1; // �����̸��� ù ��ġ ���
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
//				cnt++; // �� �̸��� ����
//			}
//			if(cnt>cnt_best)
//			{
//				//count=0;
//				for(int j=temp;j<i;j++)
//				{
//					str_best = str.substr(temp,cnt); // sring������ ���ڿ� �����Լ��� substr�� ��� -> substr(������,����)
//					//str_best[count]=str[j];
//					//count++;
//				}
//				cnt_best=cnt;
//			}
//			cnt=0; //�� �� ������ 0���� �ʱ�ȭ
//			temp=i+1; // �����̸��� ù ��ġ ���
//		}
//	}
//
//	cout << str_best << endl;
//
//	return 0;
//}
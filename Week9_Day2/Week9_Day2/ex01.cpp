//#include<iostream>
//
//using namespace std;
//
//void mySwap(int &a,int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void mySwap(float &a,float &b) // �Լ� overloading : ���� �̸��� �Լ��� �ߺ��Ͽ� ���
//{
//	float temp = a;
//	a = b;
//	b = temp;
//}
//void mySwap(char &a,char &b) // �Լ� overloading : ���� �̸��� �Լ��� �ߺ��Ͽ� ���
//{
//	char temp = a;
//	a = b;
//	b = temp;
//}
//// �ڷ����� �ٲ�� �ٸ��� �Ȱ����� �̷��� ��� ����ž�???
//// �ڷ����� ���� ���� �ʴ� �Լ��� ��������..! ex02
//
//int main()
//{
//	int a_i = 10;
//	int b_i = 20;
//	float a_f = 10.5;
//	float b_f = 20.4;
//	char a_c = 'a';
//	char b_c = 'b';
//
//	mySwap(a_f,b_f);
//	mySwap(a_c,b_c);
//
//	cout<<a_f<<", "<<b_f<<endl;
//	cout<<a_c<<", "<<b_c<<endl;
//	return 0;
//}
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
//void mySwap(float &a,float &b) // 함수 overloading : 같은 이름의 함수를 중복하여 사용
//{
//	float temp = a;
//	a = b;
//	b = temp;
//}
//void mySwap(char &a,char &b) // 함수 overloading : 같은 이름의 함수를 중복하여 사용
//{
//	char temp = a;
//	a = b;
//	b = temp;
//}
//// 자료형만 바뀌고 다른건 똑같은데 이렇게 계속 만들거야???
//// 자료형에 구애 받지 않는 함수를 만들어봐자..! ex02
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
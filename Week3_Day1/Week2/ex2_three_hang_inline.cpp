#include<iostream>

using namespace std;

#define my_MAX(x,y) (x>y)?x:y // �������ʹ� ���׿����ڸ� ������ �Ⱦ��� my_MAX(x,y)�� ���ָ� ��
#define my_MAX3(a,b,c) (a>b)?((a>c)?a:c):((b>c)?b:c); // �������ʹ� ���׿����ڸ� ������ �Ⱦ��� my_MAX(x,y)�� ���ָ� ��
#define MAX_NUM = 10

// �׷���, define�� ������ ����..!
// �Ʒ� �ΰ��� �ذ� ���
inline int max3(int a,int b,int c) // inline function --> ���� define���ٴ� �̷��� �Լ��� �����ϴ°��� �� �����ϴ�....!!! 
{
	//inline�Լ��� define�� ������ ����̴�.

	return (a>b)? ((a>c)?a:c) : ((b>c)?b:c) ;
}

const int  g_MAX = 10;  // const(���)�� ���������� �������ִ°� �� �����ϴ�...!
						  // ���������� g_�� �����ϴ� ������ ������!!!!!
int main()
{
	/*
	int a_,b_,c_;
	a_?b_:c_;	 // a== true --> return b;
			 // a!= true --> return c;
			// (����)?��:����
	*/

	int a = 10;
	int b = 5;
	int c = 20;

	//a,b,c�� ���� ū��
	int d = (a>b) ? ((a>c)?a:c) : ((b>c)?b:c);

	cout << d <<endl;


	///////////////////////////////////////////////////

	//define�� ���� �ִ�

	int m = my_MAX(10,5);
	int m3 = my_MAX3(1,2,3);

	cout << m << " " << m3 <<endl;



	////////////////////////////////////////////
	// a=10
	if(a) cout << "a!!!" << endl;
	// if ���� 0�̸� false, �ƴϸ� true ( �ٸ������� 1�ϼ�������..)
	// �׷��� �Ѵ��� �˾ƺ��� �����. --> �̷��� ������� ����!!!
	if(a!=0)  cout << "a!!!" << endl; // �̷��� ��Ȯ�ϰ� ����



	return 0;
	
}
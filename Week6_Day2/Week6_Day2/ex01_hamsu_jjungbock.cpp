#include<iostream>

using namespace std;


float myPow(float x=3, int n=2) // x�� n���� �ϴ� �Լ�
{
	cout<<"myPow2"<<endl;

	float out = 1;

	for(int i=0; i<n; i++)
	{
		out *= x;
	}
	return out;
}


float myPow(float x, float n) // �Լ� �ߺ�(���ڰ� �ٸ��� ����) -> x�� 2.4�� �̷��Ŵ� ���??
{
	//pow��� �Լ� �׳� ���..
	return pow(x,n);
}


double myPow(double x, int n) // x�� n���� �ϴ� �Լ�
{
	double out = 1;

	for(int i=0; i<n; i++)
	{
		out *= x;
	}
	return out;
}


// �׷��� �Լ��� ���� ���� ������? ( ex) x^2 = x^2.0 �ε�?? )
// pow��� �Լ��� �����ɸ��ϱ�


int main()
{
	cout<<myPow(10,2)<<endl; // int�̿��� �ڿ�(n)�� int �̴ϱ� ����
	//cout<<myPow(10.0f,2)<<endl;	// �̰� double�Լ��� ����鼭 �� ����
	cout<<myPow(10.0f,2.0f)<<endl;

	cout<<myPow( )<<endl;// n���� �־����� ������ -> default �Ķ����
	//cout<<myPow( ,3)<<endl; //���� !! default �Ķ���� �̰Ŵ� �ȵ�!! -> default �Ķ���ʹ� ������ �ǵڿ� ����� �־���Ѵ�.
	cout<<myPow(3)<<endl; // �̷��� �տ� ���°� �����ϴ�. 


	return 0; 
}
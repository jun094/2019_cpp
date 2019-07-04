#include<iostream>

using namespace std;


float myPow(float x=3, int n=2) // x의 n승을 하는 함수
{
	cout<<"myPow2"<<endl;

	float out = 1;

	for(int i=0; i<n; i++)
	{
		out *= x;
	}
	return out;
}


float myPow(float x, float n) // 함수 중복(인자가 다르니 괜찮) -> x의 2.4승 이런거는 어떻게??
{
	//pow라는 함수 그냥 사용..
	return pow(x,n);
}


double myPow(double x, int n) // x의 n승을 하는 함수
{
	double out = 1;

	for(int i=0; i<n; i++)
	{
		out *= x;
	}
	return out;
}


// 그러면 함수를 굳이 나눈 이유는? ( ex) x^2 = x^2.0 인데?? )
// pow라는 함수는 오래걸리니깐


int main()
{
	cout<<myPow(10,2)<<endl; // int이여도 뒤에(n)가 int 이니깐 괜찮
	//cout<<myPow(10.0f,2)<<endl;	// 이건 double함수가 생기면서 안 괜찮
	cout<<myPow(10.0f,2.0f)<<endl;

	cout<<myPow( )<<endl;// n승을 주어지지 않을때 -> default 파라미터
	//cout<<myPow( ,3)<<endl; //주의 !! default 파라미터 이거는 안됨!! -> default 파라미터는 무조건 맨뒤에 모어져 있어야한다.
	cout<<myPow(3)<<endl; // 이렇게 앞에 쓰는건 가능하다. 


	return 0; 
}
#include<iostream>

using namespace std;

#define my_MAX(x,y) (x>y)?x:y // 다음부터는 삼항연산자를 일일히 안쓰고 my_MAX(x,y)만 써주면 됨
#define my_MAX3(a,b,c) (a>b)?((a>c)?a:c):((b>c)?b:c); // 다음부터는 삼항연산자를 일일히 안쓰고 my_MAX(x,y)만 써주면 됨
#define MAX_NUM = 10

// 그러나, define은 문제가 많다..!
// 아래 두가지 해결 방법
inline int max3(int a,int b,int c) // inline function --> 위에 define보다는 이렇게 함수로 정의하는것이 더 안전하다....!!! 
{
	//inline함수는 define과 동일한 기능이다.

	return (a>b)? ((a>c)?a:c) : ((b>c)?b:c) ;
}

const int  g_MAX = 10;  // const(상수)로 전역변수를 선언해주는게 더 안전하다...!
						  // 전역변수는 g_로 시작하는 습관을 가지자!!!!!
int main()
{
	/*
	int a_,b_,c_;
	a_?b_:c_;	 // a== true --> return b;
			 // a!= true --> return c;
			// (조건)?참:거짓
	*/

	int a = 10;
	int b = 5;
	int c = 20;

	//a,b,c중 가장 큰수
	int d = (a>b) ? ((a>c)?a:c) : ((b>c)?b:c);

	cout << d <<endl;


	///////////////////////////////////////////////////

	//define을 통한 최댓값

	int m = my_MAX(10,5);
	int m3 = my_MAX3(1,2,3);

	cout << m << " " << m3 <<endl;



	////////////////////////////////////////////
	// a=10
	if(a) cout << "a!!!" << endl;
	// if 안이 0이면 false, 아니면 true ( 다른언어에서는 1일수도있음..)
	// 그러나 한눈에 알아보기 힘들다. --> 이렇게 사용하지 말자!!!
	if(a!=0)  cout << "a!!!" << endl; // 이렇게 명확하게 쓰자



	return 0;
	
}
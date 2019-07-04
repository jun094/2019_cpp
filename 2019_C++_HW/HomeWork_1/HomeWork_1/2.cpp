#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	for (int j=1 ; j<= 9 ; j++)
	{
		for (int i=1 ; i<= 9 ; i++)
		{
			cout.setf(ios::left);
			//setf() #include<iomanip>에 공표되어있는 함수이다.
			//좌측정렬을 해준다.

			cout <<i<<"x"<<j<<"="<<setw(3)<<(i*j);
			//setw() #include<iomanip>에 공표되어있는 함수이다.
			//setw()는 데이터가 출력 된 화면을 지정한 수만큼 폭을 정렬해준다.

			// (i*j)에 괄호치는 이유는 << 도 연산자 이므로 *와 우선수위를 따진다.
			// 물론 * 가 우선순위가 높아 안해도 되겠지만, () 해주는 습관을 가지자.
		}
		cout << endl;
	}
	return 0;
}


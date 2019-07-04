#include<iostream> //input, output stream
// c++에서는 .h를 붙히지 않은다. 
// c에서만 .h를 붙힌다.

#include<cstdio> //#include<stdio.h>
#include<cmath> // #include<math.h>


/*
int printf(const char *); // 함수 이름 선언
// 함수의 프로토 타입 : 함수 데이터타입(int), 이름(printf), 인자(char *)
*/


/*
// namespace
namespace kim {
// kim라는 성에 속해 있는 아이들..

	int i;
	int j;
}
*/


int main() // entry point 
{
	//printf("hello world !\n");
	std::cout << "hellow world\n"; 
	//printf은 위와같이 함수인 것과 달리 cout은 함수가 아님
	// 함수에는 ()가 필요하다. 그러나 cout 없는 것을 보니 변수이다. -> 전역변수
	// cout은 consol의 약어 -> 콘솔은 검은 창

	// '<<'는 변수와 변수를 이어주는 것 -> shift 연산자
	int a = 10; // 2진수로 1010
	int b = a << 1; // 원래 shift연산자는 2진수를 왼쪽으로 미는 것을 의미 따라서, 10100 = 20

	std::cout << b << "\n" ; // 그러나, c++에서 <<는 재정의 되었다. 
							 // "cout에 b를 보낸다" ==  "검은 콘솔창에 b를 보내라"
							 // c++ 에서는 이런식으로 +,-,* 등의 연산자를 재정의할 수 있다.
							 // << 연산자는 cout을 만든사람이 재정의 한 것이다..

	std::cout << b << a << "\n"; // 이렇게 이어서 쓸 수 도있다. 



	// '::' 은 ~에 소속되어 있다. 라는 뜻
	// cout은 std에 소속되어 있다. -> std는 '성' cout은 '이름'
	//kim::i = 10; // std:: 예시  -> std:: 는 namespace를 의미한다.




	return 0;
}
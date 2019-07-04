//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
/////////////////////////
/////// 클래스란??? /////
/////////////////////////
//
//// 구조체 + 기능(함수) = 패키지  --> 데이터와 작업이 동시에 가능하다.
//// 이게 바로 Class!!!! -> 구조체는 나만 쓸떄, class는 남과 함께 작업하기 위해 탄생
//
//// 구조체와 차이는 class 는 안의 변수를 남들이 건들수 없는 상태이다
//// 따라서, .으로 접근 할 수 없다. -> a.name (x)
//// 대신, public: 이라는 키워드를 써주면 (공공의) a.name이 가능하다.!!!!!!!!!
//
//class Student 
//{
//public:  // 밑에 a.name, a.grade, ... 가 가능해진다.
//	char name[10];
//	int num;
//	float grade;
//
//	void print() // void print(Student in) 에서 호출할 게 없다.
//	{
//		cout<<"이름:"<<name<<endl; // in.name 이 아니다.
//		cout<<"학번:"<<num<<endl;
//		cout<<"학점"<<grade<<endl;
//	}
//};
//
//int main()
//{
//	Student a;
//
//	strcpy(a.name,"김철수"); // strcpy(문자열, "넣을문자")
//	a.num = 14011208;
//	a.grade = 3.5;
//
//	Student b;
//	b = a;  // 이렇게 구조체를 그대로 복사하는게 가능하다.
//
//	strcpy(b.name, "이영희");
//
//	a.print();  // print(a) 가 아니다
//	b.print(); // print(b) 가 아니다
//
//
//	return 0;
//}
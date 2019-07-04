//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//// 구조체 + 기능(함수) = 패키지  --> 데이터와 작업이 동시에 가능하다.
//struct Student
//{
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
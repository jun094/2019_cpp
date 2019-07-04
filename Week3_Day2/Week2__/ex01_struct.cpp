//#include<iostream>
//#include<stdio.h>
//
//using namespace std;
//
//// 구조체
//struct Student
//{
//	char name[10];
//	int num;
//	float grade;
//
//	// 만약에 구조체에 선언만 하는 것이 아니라, 기능(밑에 pint) 까지 포함하고 싶다면???
//	// struct2 파일에서 !
//};
//
//void print(Student in)
//{
//	cout<<"이름:"<<in.name<<endl;
//	cout<<"학번:"<<in.num<<endl;
//	cout<<"학점"<<in.grade<<endl;
//}
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
//	print(a);
//	print(b);
//
//
//	return 0;
//}
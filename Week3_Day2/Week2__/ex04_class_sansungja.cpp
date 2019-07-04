//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
////class에 기능추가하기_생성자
//
//int g_numStudent = 0; //전역변수
//
//class Student 
//{
//public:  
//	char name[10];
//	int num;
//	float grade;
//
//	Student() 
//	{
//		//생성자(constructor)는 
//		// 0.클래스의 이름과 동일, return 값 x (void Student)
//		// 1.반드시 불려
//		// 2.모든 것보다 앞서
//		// 3.단 한번 불려 ! 
//
//		//학생들의 초기 값은 1번, 무명, 0학점으로 되있음.
//		num = 1; // 중복 x , 변화 x
//		strcpy(name,"무명"); // 중복o , 변화 x
//		grade = 0.0f;  //중복 o, 변화 o
//		
//		g_numStudent++; // 학생이 불릴 떄마다 +된다. --> 인원수를 셀 수 있다. 
//	}
//
//	void print() 
//	{
//		cout<<"이름:"<<name<<endl; 
//		cout<<"학번:"<<num<<endl;
//		cout<<"학점"<<grade<<endl;
//	}
//};
//
//int main()
//{
//	Student a;
//
//	// a학생 정보 기입
//	strcpy(a.name,"김철수"); // strcpy(문자열, "넣을문자")
//	a.num = 14011208;
//	a.grade = 3.5;
//
//	// b학생 정보 기입 X
//	Student b; // b학생은 아무것도 입력 x이므로 무명이다. 
//
//	a.print();  // print(a) 가 아니다
//	b.print(); // print(b) 가 아니다
//
//	Student c[10]; // 클래스 배열을 만들수도 있으며, 이렇게 되면 학생수가 자동으로 +10된다.
//
//	cout<<"학생수:"<<g_numStudent<<endl;
//
//
//	return 0;
//}
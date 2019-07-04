//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//// class에 기능추가하기_생성자
//// class에 기능추가하기_ public 밖에 변수 선언
//
//int g_numStudent = 14000000; //전역변수
//
//class Student 
//{
//	
//	int num; // public 밖에 변수 선언 -> 학번은 중복x, 변화x이다.
//
//public:  
//	char name[10];
//	float grade;
//
//	Student() 
//	{
//		//생성자는 
//		// 1.반드시 불려
//		// 2.모든 것보다 앞서
//		// 3.단 한번 불려 ! 
//
//		//num = 1400000; // 중복 x , 변화 x
//		num = g_numStudent++; // 학번 = 인원수 
//
//		strcpy(name,"무명"); // 중복o , 변화 x
//		grade = 0.0f;  //중복 o, 변화 o
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
//	//a.num = 14011208;  
//	// 학번은 public 밖에 써줬으며 전역변수를 통해 자동으로 선언되도록함.
//	strcpy(a.name,"김철수"); // strcpy(문자열, "넣을문자")	
//	a.grade = 3.5;
//
//	// b학생 정보 기입 x
//	Student b; // b학생은 아무것도 입력 x이므로 무명이다. 
//
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
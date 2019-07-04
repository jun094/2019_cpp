//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//// class에 기능추가하기_ 인자를 받는 생성자
//
//int g_numStudent = 14000000;
//
//class Student 
//{
//	int num; 
//
//public:  
//	char name[10];
//	float grade;
//
//	/*
//	Student() 
//	{
//		num = g_numStudent++; // 학번 = 인원수 
//		strcpy(name,"무명"); // 중복o , 변화 x
//		grade = 0.0f;  //중복 o, 변화 o
//	}
//	*/
//
//	Student(const char * inName) // 인자를 받는다. (인자로 큰따옴표로 받음-> 상수배열이므로 const로 받아야함)
//		// 인자를 주는 이유 -> 무명인 학생은 없다 (유령학생은 존재하지 않으므로 반드시 이름을 줘야한다.!)
//	{
//		num = g_numStudent++; 
//		strcpy(name,inName); // strcpy(name,"무명");
//		grade = 0.0f; 
//	}
//	Student(const char * inName, float inGrade) // 편입생의 경우 학점이 있을 수 있다.  
//	{
//		num = g_numStudent++; 
//		strcpy(name,inName); // strcpy(name,"무명");
//		grade = inGrade;  // grade = 0.0f; 
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
//	/* 과거 full로 정보기입 했을 떄
//	strcpy(a.name,"김철수"); 
//	a.num = 14011208;
//	a.grade = 3.5;
//	*/
//
//
//	// a학생 정보 기입 ( 신입생이라 이름만 존재 )
//	Student a("김철수"); // 이름인자
//	//strcpy(a.name,"김철수"); 
//	a.grade = 3.5;
//
//	// b학생 정보 기입 ( 편입생이라 이름, 학점 존재 )
//	Student b("이영희", 4.0); // 이름,학점 인자
//	 
//
//	// Student c; // 기본생성자(인자가 없는 생성자)가 없으므로 오류!
//
//	a.print();  
//	b.print(); 
//
//
//
//	return 0;
//}
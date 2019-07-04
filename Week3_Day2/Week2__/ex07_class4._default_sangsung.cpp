#include<iostream>
#include<cstdio>

using namespace std;

// class에 기능추가하기_default 생성자
// 생성자가 없을 때 -> 자동으로 default(빈) 생성자 생성함  ex) Student();
// 생성자가 한개라도 있을 때 -> default 생성자 자동으로 생성 x -> 따라서, 내가 빈 생성자를 직접 만들어줘야함!!!!!!!!!!중요!!!

int g_numStudent = 14000000;

class Student 
{
	int num; 

public:  
	char name[10];
	float grade;


	// 여기서부터는 너무 길다 !!!!-> 한눈에 안들어와 --> 밖에 빼자 --> class5

	Student() // 인자가 없는 생성자 --> 기본생성자 ( default 생성자 )
	{
		strcpy(name,"무명"); 
		grade = 0.0f;  
		num = g_numStudent++; 
	}
	Student(const char * inName) // 무명인 학생은 없다 (유령학생은 존재하지 않으므로 반드시 이름을 줘야한다.!)
	{
		strcpy(name,inName); 
		grade = 0.0f; 
		num = g_numStudent++; 
	}
	Student(const char * inName, float inGrade) //편입생의 경우 이름,학점이 있을 수 있다.  
	{
		strcpy(name,inName); // strcpy(name,"무명");
		grade = inGrade; 
		num = g_numStudent++; 
	}

	void print() 
	{
		cout<<"이름:"<<name<<endl; 
		cout<<"학번:"<<num<<endl;
		cout<<"학점"<<grade<<endl;
	}
};

int main()
{

	Student a("김철수"); //학생이름은 무조건 줘야하므로 이름만 줬다. (이름만)

	Student b("이영희", 4.0);  // 애는 편입생이라 학점이 이미 존재한다. (이름,학점)

	Student c; // 애는 유령학생 (이름x,학점x)
	// 중요 !!! 근데 중요한건 visual에서는 생성자를 한개도 안 만들면 default 생성자를 자동으로(귀찮아서 안만든줄) 만들어서 생성자 한개도 안만들면 Student c가 가능
	// 그러나, 한개라도 생성자를 만들면 Student c;는 불가능 ! 반드시 default생성자를 만들어줘야함

	Student d[2]; // 배열은 자동으로 default로 간다.

	a.print();  
	b.print(); 
	c.print();
	d[0].print();
	d[1].print();

	return 0;
}
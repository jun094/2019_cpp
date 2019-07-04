#include<iostream>

using namespace std;

int g_num = 140000;

class Student{
	int num;
public:
	string name;
	int grade;

	Student() // default
	{
		num = g_num++;
		//strcpy(name,"홍길동");
		name = "홍길동";
		grade = 0.0f;
	}
	Student(string c) // 신입생 ( 이름 )
	{
		num = g_num++;
		//strcpy(name,"홍길동");
		name = c;
		grade = 0.0f;
	}
	Student(string c, float n) // 편입생 ( 이름, 학점 )
	{
		num = g_num++;
		//strcpy(name,"홍길동");
		name = c;
		//grade = 0.0f;
		grade = n;
	}
	void print()
	{
		// 왜 안돼??????????????????????????????????????????????
		cout<<"이름 "<<name<<endl;
		cout<<"학번 "<<num<<endl; 
		cout<<"학점 "<<grade<<endl; 
	}
};
int main()
{
	//신입생 ( 이름만 )
	Student a("최준영");
	//Student a("최준영");

	// 편입생 ( 이름, 학점 )
	Student b("박해선", 3.5);

	// 미입학 ( 학번만 )
	Student c;
	Student d[2];

	a.print();
	b.print();
	c.print();
	d[0].print();
	d[1].print();

}
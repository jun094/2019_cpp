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
		//strcpy(name,"ȫ�浿");
		name = "ȫ�浿";
		grade = 0.0f;
	}
	Student(string c) // ���Ի� ( �̸� )
	{
		num = g_num++;
		//strcpy(name,"ȫ�浿");
		name = c;
		grade = 0.0f;
	}
	Student(string c, float n) // ���Ի� ( �̸�, ���� )
	{
		num = g_num++;
		//strcpy(name,"ȫ�浿");
		name = c;
		//grade = 0.0f;
		grade = n;
	}
	void print()
	{
		// �� �ȵ�??????????????????????????????????????????????
		cout<<"�̸� "<<name<<endl;
		cout<<"�й� "<<num<<endl; 
		cout<<"���� "<<grade<<endl; 
	}
};
int main()
{
	//���Ի� ( �̸��� )
	Student a("���ؿ�");
	//Student a("���ؿ�");

	// ���Ի� ( �̸�, ���� )
	Student b("���ؼ�", 3.5);

	// ������ ( �й��� )
	Student c;
	Student d[2];

	a.print();
	b.print();
	c.print();
	d[0].print();
	d[1].print();

}
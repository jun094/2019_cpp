#include<iostream>
#include<cstdio>

using namespace std;

// class�� ����߰��ϱ�_default ������
// �����ڰ� ���� �� -> �ڵ����� default(��) ������ ������  ex) Student();
// �����ڰ� �Ѱ��� ���� �� -> default ������ �ڵ����� ���� x -> ����, ���� �� �����ڸ� ���� ����������!!!!!!!!!!�߿�!!!

int g_numStudent = 14000000;

class Student 
{
	int num; 

public:  
	char name[10];
	float grade;


	// ���⼭���ʹ� �ʹ� ��� !!!!-> �Ѵ��� �ȵ��� --> �ۿ� ���� --> class5

	Student() // ���ڰ� ���� ������ --> �⺻������ ( default ������ )
	{
		strcpy(name,"����"); 
		grade = 0.0f;  
		num = g_numStudent++; 
	}
	Student(const char * inName) // ������ �л��� ���� (�����л��� �������� �����Ƿ� �ݵ�� �̸��� ����Ѵ�.!)
	{
		strcpy(name,inName); 
		grade = 0.0f; 
		num = g_numStudent++; 
	}
	Student(const char * inName, float inGrade) //���Ի��� ��� �̸�,������ ���� �� �ִ�.  
	{
		strcpy(name,inName); // strcpy(name,"����");
		grade = inGrade; 
		num = g_numStudent++; 
	}

	void print() 
	{
		cout<<"�̸�:"<<name<<endl; 
		cout<<"�й�:"<<num<<endl;
		cout<<"����"<<grade<<endl;
	}
};

int main()
{

	Student a("��ö��"); //�л��̸��� ������ ����ϹǷ� �̸��� ���. (�̸���)

	Student b("�̿���", 4.0);  // �ִ� ���Ի��̶� ������ �̹� �����Ѵ�. (�̸�,����)

	Student c; // �ִ� �����л� (�̸�x,����x)
	// �߿� !!! �ٵ� �߿��Ѱ� visual������ �����ڸ� �Ѱ��� �� ����� default �����ڸ� �ڵ�����(�����Ƽ� �ȸ�����) ���� ������ �Ѱ��� �ȸ���� Student c�� ����
	// �׷���, �Ѱ��� �����ڸ� ����� Student c;�� �Ұ��� ! �ݵ�� default�����ڸ� ����������

	Student d[2]; // �迭�� �ڵ����� default�� ����.

	a.print();  
	b.print(); 
	c.print();
	d[0].print();
	d[1].print();

	return 0;
}
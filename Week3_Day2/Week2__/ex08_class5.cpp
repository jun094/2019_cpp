#include<iostream>
#include<cstdio>

using namespace std;

// class �Ѵ��� �ȵ��� -> �ڵ���� -> �Լ��� ������ ���� 

int g_numStudent = 14000000;

class Student 
{
	int num; 

public:  
	char name[10];
	float grade;


	// ���⼭���ʹ� �ʹ� ��� !!!!-> �Ѵ��� �ȵ��� --> �ۿ� ���� --> class5

	Student();
	Student(const char * inName) ;
	Student(const char * inName, float inGrade) ;

	void print() ;
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


	cout<<"-------------------�л���:"<<g_numStudent<<endl;


	return 0;
}
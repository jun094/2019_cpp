//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//// class�� ����߰��ϱ�_ ���ڸ� �޴� ������
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
//		num = g_numStudent++; // �й� = �ο��� 
//		strcpy(name,"����"); // �ߺ�o , ��ȭ x
//		grade = 0.0f;  //�ߺ� o, ��ȭ o
//	}
//	*/
//
//	Student(const char * inName) // ���ڸ� �޴´�. (���ڷ� ū����ǥ�� ����-> ����迭�̹Ƿ� const�� �޾ƾ���)
//		// ���ڸ� �ִ� ���� -> ������ �л��� ���� (�����л��� �������� �����Ƿ� �ݵ�� �̸��� ����Ѵ�.!)
//	{
//		num = g_numStudent++; 
//		strcpy(name,inName); // strcpy(name,"����");
//		grade = 0.0f; 
//	}
//	Student(const char * inName, float inGrade) // ���Ի��� ��� ������ ���� �� �ִ�.  
//	{
//		num = g_numStudent++; 
//		strcpy(name,inName); // strcpy(name,"����");
//		grade = inGrade;  // grade = 0.0f; 
//	}
//
//	void print() 
//	{
//		cout<<"�̸�:"<<name<<endl; 
//		cout<<"�й�:"<<num<<endl;
//		cout<<"����"<<grade<<endl;
//	}
//};
//
//int main()
//{
//	/* ���� full�� �������� ���� ��
//	strcpy(a.name,"��ö��"); 
//	a.num = 14011208;
//	a.grade = 3.5;
//	*/
//
//
//	// a�л� ���� ���� ( ���Ի��̶� �̸��� ���� )
//	Student a("��ö��"); // �̸�����
//	//strcpy(a.name,"��ö��"); 
//	a.grade = 3.5;
//
//	// b�л� ���� ���� ( ���Ի��̶� �̸�, ���� ���� )
//	Student b("�̿���", 4.0); // �̸�,���� ����
//	 
//
//	// Student c; // �⺻������(���ڰ� ���� ������)�� �����Ƿ� ����!
//
//	a.print();  
//	b.print(); 
//
//
//
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
////class�� ����߰��ϱ�_������
//
//int g_numStudent = 0; //��������
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
//		//������(constructor)�� 
//		// 0.Ŭ������ �̸��� ����, return �� x (void Student)
//		// 1.�ݵ�� �ҷ�
//		// 2.��� �ͺ��� �ռ�
//		// 3.�� �ѹ� �ҷ� ! 
//
//		//�л����� �ʱ� ���� 1��, ����, 0�������� ������.
//		num = 1; // �ߺ� x , ��ȭ x
//		strcpy(name,"����"); // �ߺ�o , ��ȭ x
//		grade = 0.0f;  //�ߺ� o, ��ȭ o
//		
//		g_numStudent++; // �л��� �Ҹ� ������ +�ȴ�. --> �ο����� �� �� �ִ�. 
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
//	Student a;
//
//	// a�л� ���� ����
//	strcpy(a.name,"��ö��"); // strcpy(���ڿ�, "��������")
//	a.num = 14011208;
//	a.grade = 3.5;
//
//	// b�л� ���� ���� X
//	Student b; // b�л��� �ƹ��͵� �Է� x�̹Ƿ� �����̴�. 
//
//	a.print();  // print(a) �� �ƴϴ�
//	b.print(); // print(b) �� �ƴϴ�
//
//	Student c[10]; // Ŭ���� �迭�� ������� ������, �̷��� �Ǹ� �л����� �ڵ����� +10�ȴ�.
//
//	cout<<"�л���:"<<g_numStudent<<endl;
//
//
//	return 0;
//}
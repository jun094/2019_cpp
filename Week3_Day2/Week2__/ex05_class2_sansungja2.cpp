//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//// class�� ����߰��ϱ�_������
//// class�� ����߰��ϱ�_ public �ۿ� ���� ����
//
//int g_numStudent = 14000000; //��������
//
//class Student 
//{
//	
//	int num; // public �ۿ� ���� ���� -> �й��� �ߺ�x, ��ȭx�̴�.
//
//public:  
//	char name[10];
//	float grade;
//
//	Student() 
//	{
//		//�����ڴ� 
//		// 1.�ݵ�� �ҷ�
//		// 2.��� �ͺ��� �ռ�
//		// 3.�� �ѹ� �ҷ� ! 
//
//		//num = 1400000; // �ߺ� x , ��ȭ x
//		num = g_numStudent++; // �й� = �ο��� 
//
//		strcpy(name,"����"); // �ߺ�o , ��ȭ x
//		grade = 0.0f;  //�ߺ� o, ��ȭ o
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
//	//a.num = 14011208;  
//	// �й��� public �ۿ� �������� ���������� ���� �ڵ����� ����ǵ�����.
//	strcpy(a.name,"��ö��"); // strcpy(���ڿ�, "��������")	
//	a.grade = 3.5;
//
//	// b�л� ���� ���� x
//	Student b; // b�л��� �ƹ��͵� �Է� x�̹Ƿ� �����̴�. 
//
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
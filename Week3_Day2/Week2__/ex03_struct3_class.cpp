//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
/////////////////////////
/////// Ŭ������??? /////
/////////////////////////
//
//// ����ü + ���(�Լ�) = ��Ű��  --> �����Ϳ� �۾��� ���ÿ� �����ϴ�.
//// �̰� �ٷ� Class!!!! -> ����ü�� ���� ����, class�� ���� �Բ� �۾��ϱ� ���� ź��
//
//// ����ü�� ���̴� class �� ���� ������ ������ �ǵ�� ���� �����̴�
//// ����, .���� ���� �� �� ����. -> a.name (x)
//// ���, public: �̶�� Ű���带 ���ָ� (������) a.name�� �����ϴ�.!!!!!!!!!
//
//class Student 
//{
//public:  // �ؿ� a.name, a.grade, ... �� ����������.
//	char name[10];
//	int num;
//	float grade;
//
//	void print() // void print(Student in) ���� ȣ���� �� ����.
//	{
//		cout<<"�̸�:"<<name<<endl; // in.name �� �ƴϴ�.
//		cout<<"�й�:"<<num<<endl;
//		cout<<"����"<<grade<<endl;
//	}
//};
//
//int main()
//{
//	Student a;
//
//	strcpy(a.name,"��ö��"); // strcpy(���ڿ�, "��������")
//	a.num = 14011208;
//	a.grade = 3.5;
//
//	Student b;
//	b = a;  // �̷��� ����ü�� �״�� �����ϴ°� �����ϴ�.
//
//	strcpy(b.name, "�̿���");
//
//	a.print();  // print(a) �� �ƴϴ�
//	b.print(); // print(b) �� �ƴϴ�
//
//
//	return 0;
//}
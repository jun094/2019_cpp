// ���ڿ�
// c������ char ��� ���� ������ �迭�� ����� char str[] �� ������ �÷��� ���� ����
// c++������ char �� ���� ������Ÿ��,  string�̶�� ���ڿ� ������ Ÿ���� ��� !!!!!!!!!!!


#include<iostream>
#include<string>

using namespace std;

int main()
{
	// ex1 ( C������ ���ڿ� �ޱ� )
	//char str1[] = "sejong";
	//char str2[7] = {'s','e','j','o','n','g','\0'};
	////char str3[7] = {'s','e','j','o','n','g'}; //�迭������ ���ڿ��� �����ϱ⸦ 0���ڸ� ���������� ��´�. �ٵ� 0���ڰ� ������ 0���������� ������ ����...

	//cout << str1 << endl;
	//cout << str2 << endl;
	////cout << str3 << endl;

	//cout << "-------------------------------------------------" << endl ;


	////ex2 ( C������ ���ڿ� �ޱ� )
	//char str_a[] = "sejong";
	//char str_b[255];
	//// str_b = "sejong"  //�̰� �Ұ��� !! �����԰� ���ÿ� ���ڿ��� �־���� �Ѵ�..!



	//cout << "-------------------------------------------------" << endl ;


	//ex3 ( c++���� string )
	char str1[] = "sejong";
	string str2("sejong"); // c++������ ���ڿ��� �����ϱ����� string�̶�� ������Ÿ��(Ŭ����)�� ���
	//string str2 = "sejong"; // ���ǰͰ� ������ �ǹ�
	
	
	cout << str2 << endl;

	str2 = "university"; // �̷��� ���浵 �����ϴ�
	cout << str2 << endl;

	str2 += "college"; // �̷��� �߰��� �����ϴ�.
	cout << str2 << endl;
	
	string str4 = str2 + str1; // �̷��� �߰��� �����ϴ�.
	cout << str4 << endl;

	cout << "-------------------------------------------------" << endl ;

	//ex4 ( string �������� Ư¡ )
	string str3;

	str3 = string("dept") + string("software");
	str3.append("sejong"); // �ٿ��ֱ�
	cout << str3 << endl;

	string str_1 = "sejong";
	string str_2 = "sejong";

	if(str_1==str_2)
		cout<<"����"<<endl;
	else
		cout<<"�ٸ���"<<endl;


	cout << "-------------------------------------------------" << endl ;

	//ex5 ( ���ڿ� �޾ƺ��� )
	char str[100];
	cout << "���ڿ�:";
	cin >> str;
	cout << "�Էµ� ���ڿ�:" << str << endl;  //���� : ���� ���Ե� ���ڿ��� ������ ���Ѵ�.

	cout << "-------------------------------------------------" << endl ;
	// ���� �����Ͽ� �޾ƺ���
	char strr[100];
	cout << "���ڿ�:";
	cin.getline(strr,100,'\n');
	cout << "�Էµ� ���ڿ�:" << strr << endl; 
	return 0;
}